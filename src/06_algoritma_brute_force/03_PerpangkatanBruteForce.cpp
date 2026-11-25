#include <iostream>
using namespace std;

int main() {
    double a;                                                   // basis (bilangan real)
    int n;                                                      // pangkat (bulat tak-negatif)
    double hasil = 1.0;                                         // 1

    cout << "=== 3. BRUTE FORCE: PERPANGKATAN (a^n) ===\n";     // 1
    cout << "Masukkan nilai basis (a)   = ";                    // 1
    cin >> a;                                                   // 1
    cout << "Masukkan nilai pangkat (n) = ";                    // 1
    cin >> n;                                                   // 1

    if (n < 0) {                                                // 1
        cerr << "Pangkat harus bilangan bulat tak-negatif!\n";
        return 1;
    }

    // Kalikan 1 dengan a sebanyak n kali
    for (int i = 1; i <= n; i++) {                              // 1   // n   // n
        hasil = hasil * a;                                      // n
    }

    cout << "\nHasil " << a << "^" << n << " = " << hasil << "\n"; // 1

    return 0;                                                   // 1
}

/*
====================================================================
ANALISIS KOMPLEKSITAS (SLIDE 12-14 PAA 9)
====================================================================
- Best Case (n = 0) : Loop tidak berjalan -> T(n) = 9 -> Omega(1)
- Worst Case (n > 0): Jumlah operasi perkalian = n kali
  T(n) = 3n + 9 -> O(n) [Linier]
- Kompleksitas Ruang S(n) = O(1) [Konstan]
====================================================================
*/
