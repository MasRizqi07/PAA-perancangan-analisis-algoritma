#include <iostream>
using namespace std;

int main() {
    int n;                                                      // deklarasi variabel
    unsigned long long hasil = 1;                               // 1

    cout << "=== 4. BRUTE FORCE: FAKTORIAL (n!) ===\n";       // 1
    cout << "Masukkan nilai n = ";                              // 1
    cin >> n;                                                   // 1

    if (n < 0) {                                                // 1
        cerr << "Nilai n harus tak-negatif (>= 0)!\n";
        return 1;
    }

    if (n > 0) {                                                // 1
        for (int i = n; i >= 1; i--) {                          // 1   // n   // n
            hasil = hasil * i;                                  // n
        }
    } else {
        cout << "Nilai faktorial = 1\n";                        // 1 (khusus n = 0)
    }

    cout << "Hasil jumlah faktorial (" << n << "!) = " << hasil << "\n"; // 1

    return 0;                                                   // 1
}

/*
====================================================================
ANALISIS KOMPLEKSITAS (SLIDE 15-17 PAA 9)
====================================================================
- Best Case (n = 0) : Langsung ke blok else -> Omega(1)
- Worst Case (n > 0): Jumlah operasi perkalian = n kali
  T(n) = 3n + 9 -> O(n) [Linier]
- Kompleksitas Ruang S(n) = O(1) [Konstan]
====================================================================
*/
