#include <iostream>
#include <string>
using namespace std;

int main() {
    string teks, pattern;                                       // deklarasi string

    cout << "=== 9. BRUTE FORCE: STRING MATCHING ===\n";        // 1
    cout << "Masukkan Teks    : ";                              // 1
    getline(cin, teks);                                         // 1
    cout << "Masukkan Pattern : ";                              // 1
    getline(cin, pattern);                                      // 1

    int n = static_cast<int>(teks.length());                    // 1
    int m = static_cast<int>(pattern.length());                 // 1
    int lokasiPertama = -1;                                     // 1

    if (m > 0 && m <= n) {                                      // 1
        // Geser pattern dari kiri ke kanan (0 sampai n - m)
        for (int i = 0; i <= n - m; i++) {                      // 1   // (n-m+1)   // (n-m+1)
            int j = 0;                                          // (n-m+1)
            while (j < m && teks[i + j] == pattern[j]) {        // BC: (n-m+1) | WC: m*(n-m+1)
                j = j + 1;                                      // BC: 0 | WC: m*(n-m+1)
            }
            if (j == m) {                                       // (n-m+1)
                lokasiPertama = i;                              // 1
                break;                                          // berhenti di lokasi pertama
            }
        }
    }

    if (lokasiPertama != -1) {                                  // 1
        cout << "\nPattern ditemukan pertama kali pada indeks ke-" << lokasiPertama 
             << " (posisi karakter ke-" << (lokasiPertama + 1) << ")\n"; // 1
    } else {
        cout << "\nPattern tidak ditemukan di dalam teks.\n";   // 1
    }

    return 0;                                                   // 1
}

/*
====================================================================
ANALISIS KOMPLEKSITAS (SLIDE 29-33 PAA 9)
====================================================================
- Best Case (BC)    : Cocok langsung di awal teks -> Omega(m)
- Average Case (AC) : Ketidakcocokan terjadi di karakter awal -> Theta(n)
- Worst Case (WC)   : Cocok hampir seluruh karakter di tiap pergeseran
  (misal teks "000001", pattern "001") -> O(n * m)
- Kompleksitas Ruang S(n) = O(n + m)
====================================================================
*/
