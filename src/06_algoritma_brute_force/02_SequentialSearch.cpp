#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;                                                      // deklarasi variabel
    int jumlah = 0;                                             // 1
    int indeksPertama = -1;                                     // 1
    int cari;                                                   // deklarasi variabel

    cout << "=== 2. BRUTE FORCE: SEQUENTIAL SEARCH ===\n";      // 1
    cout << "Masukkan jumlah siswa (n) = ";                     // 1
    cin >> n;                                                   // 1

    vector<int> data(n);                                        // 1
    for (int i = 0; i < n; i++) {                               // 1   // n   // n
        cout << "Masukkan nilai siswa ke-" << (i + 1) << " = "; // n
        cin >> data[i];                                         // n
    }

    cout << "Masukkan nilai yang dicari (x) = ";                // 1
    cin >> cari;                                                // 1

    cout << "\n--- Proses Pencarian Beruntun ---\n";            // 1
    for (int i = 0; i < n; i++) {                               // 1   // n   // n
        if (cari == data[i]) {                                  // n
            if (indeksPertama == -1) {                          // BC: 0 | WC: n
                indeksPertama = i;                              // 1
            }
            cout << "Data ditemukan pada posisi ke-" << (i + 1) 
                 << " (indeks [" << i << "])\n";               // BC: 0 | AC: (1/2)n | WC: n
            jumlah = jumlah + 1;                                // BC: 0 | AC: (1/2)n | WC: n
        }
    }

    cout << "\n";                                               // 1
    if (jumlah > 0) {                                           // 1
        cout << "Status        : Data ketemu (" << jumlah << " data)\n"; // 1
        cout << "Indeks awal   : " << indeksPertama << "\n";    // 1
    } else {
        cout << "Status        : Data tidak ketemu\n";          // 1
        cout << "Keluaran      : -1\n";                         // 1
    }

    return 0;                                                   // 1
}

/*
====================================================================
ANALISIS KOMPLEKSITAS (SLIDE 8-11 PAA 9)
====================================================================
- Best Case (BC)  : Data tidak ditemukan (body if = 0) -> Omega(n)
- Average Case    : Separuh data cocok ((1/2)n)       -> Theta(n)
- Worst Case (WC) : Seluruh data cocok (n kali)        -> O(n)
- Kompleksitas Ruang S(n) = O(n)
====================================================================
*/
