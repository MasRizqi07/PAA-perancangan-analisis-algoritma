#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;               // deklarasi variabel
    int jumlahLulus = 0; // 1

    cout << "=== SOAL 2 UTS: ARRAY 3 DIMENSI & PENGUJIAN ===\n"; // 1
    cout << "Masukkan ukuran dimensi kubik Array 3D (n): ";      // 1
    cin >> n;                                                    // 1

    vector<vector<vector<int>>> data(n, vector<vector<int>>(n, vector<int>(n))); // 1 (alokasi n^3)

    // TAHAP 1: Pengulangan 3 Tingkat untuk Input Data
    cout << "\nMasukkan " << (n * n * n) << " elemen nilai:\n"; // 1
    for (int i = 0; i < n; i++)
    { // 1   // n   // n
        for (int j = 0; j < n; j++)
        { // n   // n*n   // n*n
            for (int k = 0; k < n; k++)
            {                                                             // n*n   // n*n*n   // n*n*n
                cout << "data[" << i << "][" << j << "][" << k << "] = "; // n*n*n
                cin >> data[i][j][k];                                     // n*n*n
            }
        }
    }

    // TAHAP 2: Pengulangan 3 Tingkat dengan Pengujian di Dalamnya
    cout << "\n--- Hasil Pengujian Nilai >= 75 ---\n"; // 1
    for (int i = 0; i < n; i++)
    { // 1   // n   // n
        for (int j = 0; j < n; j++)
        { // n   // n*n   // n*n
            for (int k = 0; k < n; k++)
            { // n*n   // n*n*n   // n*n*n
                if (data[i][j][k] >= 75)
                {                                  // n*n*n
                    jumlahLulus = jumlahLulus + 1; // BC: 0 | AC: (1/2)*n^3 | WC: n^3
                    cout << "Lulus di [" << i << "][" << j << "][" << k << "] = "
                         << data[i][j][k] << "\n"; // BC: 0 | AC: (1/2)*n^3 | WC: n^3
                }
            }
        }
    }

    cout << "\nTotal data yang lulus pengujian (>= 75): " << jumlahLulus << "\n"; // 1
    return 0;                                                                     // 1
}

/*
====================================================================
ANALISIS KOMPLEKSITAS SOAL 2
====================================================================
A. Jika Dihitung Keseluruhan Program (Input + Proses Pengujian):
   - Konstanta luar loop         = 11
   - Suku linier (n)             = 6n
   - Suku kuadratik (n^2)        = 6n^2
   - Suku kubik loop & if (n^3)  = 7n^3
   1. Best Case (Semua nilai < 75, body if = 0):
      T_best(n) = 7n^3 + 6n^2 + 6n + 11  -> Omega(n^3)
   2. Average Case (Separuh nilai >= 75, body if = (1/2)n^3 + (1/2)n^3 = n^3):
      T_avg(n)  = 8n^3 + 6n^2 + 6n + 11  -> Theta(n^3)
   3. Worst Case (Semua nilai >= 75, body if = n^3 + n^3 = 2n^3):
      T_worst(n)= 9n^3 + 6n^2 + 6n + 11  -> O(n^3) [Kubik]

B. Jika Dihitung Khusus Blok Proses Pengujian (Tahap 2 Saja):
   - Best Case  = 3n^3 + 3n^2 + 3n + 3   -> Omega(n^3)
   - Average    = 4n^3 + 3n^2 + 3n + 3   -> Theta(n^3)
   - Worst Case = 5n^3 + 3n^2 + 3n + 3   -> O(n^3)

C. Kompleksitas Ruang S(n):
   - Alokasi array 3 dimensi berukuran n x n x n elemen integer (4 * n^3 byte)
   - S(n) = n^3 = O(n^3)
====================================================================
*/