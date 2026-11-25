#include <iostream>
using namespace std;

const int N = 9;                                                // ukuran papan tetap 9x9

// Cek apakah penempatan angka 1..9 aman di (baris, kolom)
bool isAman(int grid[N][N], int baris, int kolom, int angka) {
    // 1. Periksa baris dan kolom
    for (int x = 0; x < N; x++) {                               // 1   // 9   // 9
        if (grid[baris][x] == angka || grid[x][kolom] == angka) { // 2 * 9
            return false;                                       // 1
        }
    }

    // 2. Periksa sub-kotak 3x3
    int startBaris = baris - (baris % 3);                       // 1
    int startKolom = kolom - (kolom % 3);                       // 1
    for (int i = 0; i < 3; i++) {                               // 1   // 3   // 3
        for (int j = 0; j < 3; j++) {                           // 3   // 9   // 9
            if (grid[i + startBaris][j + startKolom] == angka) { // 9
                return false;                                   // 1
            }
        }
    }

    return true;                                                // 1
}

// Algoritma Brute Force Backtracking (Slide 39)
bool selesaikanSudoku(int grid[N][N], int baris, int kolom) {
    // Basis: jika sudah melewati baris ke-8, seluruh 81 sel terisi
    if (baris == N - 1 && kolom == N) {                         // 2
        return true;                                            // 1
    }

    // Pindah ke baris berikutnya jika kolom mencapai 9
    if (kolom == N) {                                           // 1
        baris++;                                                // 1
        kolom = 0;                                              // 1
    }

    // Lewati sel yang sudah terisi angka awal
    if (grid[baris][kolom] > 0) {                               // 1
        return selesaikanSudoku(grid, baris, kolom + 1);
    }

    // Coba tempatkan angka 1 sampai 9
    for (int angka = 1; angka <= 9; angka++) {                  // 1   // 9   // 9
        if (isAman(grid, baris, kolom, angka)) {                // 9 * T_isAman
            grid[baris][kolom] = angka;                         // 9

            if (selesaikanSudoku(grid, baris, kolom + 1)) {     // cabang rekursi 9^k
                return true;                                    // 1
            }
        }
        // Mundur satu langkah (backtrack) jika buntu
        grid[baris][kolom] = 0;                                 // 9
    }

    return false;                                               // 1
}

void cetakPapan(int grid[N][N]) {
    for (int i = 0; i < N; i++) {                               // 1   // 9   // 9
        if (i % 3 == 0 && i != 0) {
            cout << "------+-------+------\n";
        }
        for (int j = 0; j < N; j++) {                           // 9   // 81   // 81
            if (j % 3 == 0 && j != 0) cout << "| ";
            cout << grid[i][j] << " ";                          // 81
        }
        cout << "\n";                                           // 9
    }
}

int main() {
    // Contoh Puzzle Sudoku resmi dari Slide 36 PAA 9 (0 = sel kosong)
    int grid[N][N] = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}
    };

    cout << "=== 11. BRUTE FORCE: SUDOKU SOLVER (9x9) ===\n\n"; // 1
    cout << "Papan Awal (Slide 36):\n";                         // 1
    cetakPapan(grid);                                           // 1

    if (selesaikanSudoku(grid, 0, 0)) {                         // T_sudoku
        cout << "\nSolusi Ditemukan (Sesuai Slide 38):\n";      // 1
        cetakPapan(grid);                                       // 1
    } else {
        cout << "\nTidak ada solusi yang valid.\n";             // 1
    }

    return 0;                                                   // 1
}

/*
====================================================================
ANALISIS KOMPLEKSITAS (SLIDE 35-39 PAA 9)
====================================================================
- Misalkan k adalah jumlah sel kosong pada papan 9x9 (k <= 81).
- Setiap sel kosong mencoba maksimal 9 kemungkinan angka (1..9).
- Kompleksitas Waktu Worst Case: T(k) = O(9^k) [Eksponensial]
- Kompleksitas Ruang S(n) = O(1) (ukuran papan 9x9 dan kedalaman rekursi <= 81 tetap)
====================================================================
*/
