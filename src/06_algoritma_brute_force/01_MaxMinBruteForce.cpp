#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;                                                      // deklarasi variabel

    cout << "=== 1. BRUTE FORCE: MAX & MIN ELEMEN ===\n";       // 1
    cout << "Masukkan jumlah elemen (n): ";                     // 1
    cin >> n;                                                   // 1

    if (n <= 0) return 1;                                       // 1

    vector<int> data(n);                                        // 1
    cout << "Masukkan data ke-1 = ";                            // 1
    cin >> data[0];                                             // 1

    int maks = data[0];                                         // 1
    int mins = data[0];                                         // 1

    // Bandingkan setiap elemen sisa (n - 1 perbandingan)
    for (int i = 1; i < n; i++) {                               // 1   // (n-1)   // (n-1)
        cout << "Masukkan data ke-" << (i + 1) << " = ";        // (n-1)
        cin >> data[i];                                         // (n-1)

        if (data[i] > maks) {                                   // (n-1)
            maks = data[i];                                     // BC: 0 | WC: (n-1)
        } else if (data[i] < mins) {                            // (n-1)
            mins = data[i];                                     // BC: 0 | WC: (n-1)
        }
    }

    cout << "\nNilai max = " << maks << "\n";                   // 1
    cout << "Nilai min = " << mins << "\n";                     // 1

    return 0;                                                   // 1
}

/*
====================================================================
ANALISIS KOMPLEKSITAS (SLIDE 5-7 PAA 9)
====================================================================
- Operasi perbandingan elemen utama: n - 1 kali
- Kompleksitas Waktu T(n) = O(n) [Linier]
- Kompleksitas Ruang S(n) = O(n) (menyimpan n elemen di larik data)
====================================================================
*/
