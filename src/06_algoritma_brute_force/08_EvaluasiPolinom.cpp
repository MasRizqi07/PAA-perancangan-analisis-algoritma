#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;                                                      // derajat tertinggi polinom
    double t;                                                   // nilai x = t yang dievaluasi

    cout << "=== 8. BRUTE FORCE: EVALUASI POLINOM p(x) ===\n";  // 1
    cout << "Masukkan derajat polinom (n): ";                   // 1
    cin >> n;                                                   // 1

    vector<double> a(n + 1);                                    // n + 1
    for (int i = 0; i <= n; i++) {                              // 1   // (n+1)   // (n+1)
        cout << "Masukkan koefisien a[" << i << "] (untuk x^" << i << "): "; // n + 1
        cin >> a[i];                                            // n + 1
    }

    cout << "Masukkan nilai t (x = t): ";                       // 1
    cin >> t;                                                   // 1

    // Algoritma sesuai pseudocode Slide 23
    double p = a[0];                                            // 1
    double pangkat = 1.0;                                       // 1

    for (int i = 1; i <= n; i++) {                              // 1   // n   // n
        pangkat = pangkat * t;                                  // n (1 operasi kali)
        p = p + a[i] * pangkat;                                 // 2n (1 operasi kali + 1 tambah)
    }

    cout << "\nHasil evaluasi p(" << t << ") = " << p << "\n";  // 1

    return 0;                                                   // 1
}

/*
====================================================================
ANALISIS KOMPLEKSITAS (SLIDE 23 PAA 9)
====================================================================
- Sesuai implementasi Slide 23 (akumulasi pangkat bertahap):
  Operasi perkalian = 2n, operasi penjumlahan = n -> T(n) = O(n)
- Catatan Teori: Jika x^i dihitung ulang dari awal di tiap suku tanpa
  menyimpan variabel `pangkat`, operasinya menjadi n(n+1)/2 -> O(n^2).
- Kompleksitas Ruang S(n) = O(n)
====================================================================
*/
