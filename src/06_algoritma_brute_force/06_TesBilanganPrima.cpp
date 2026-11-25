#include <iostream>
using namespace std;

int main() {
    long long n;                                                // bilangan bulat positif
    bool isPrima = true;                                        // 1

    cout << "=== 6. BRUTE FORCE: TES BILANGAN PRIMA ===\n";     // 1
    cout << "Masukkan bilangan bulat positif (n): ";             // 1
    cin >> n;                                                   // 1

    if (n <= 1) {                                               // 1
        isPrima = false;                                        // 1
    } else {
        // Bagi n dengan 2 sampai akar(n) [i * i <= n]
        for (long long i = 2; i * i <= n; i++) {                // 1   // sqrt(n)   // sqrt(n)
            if (n % i == 0) {                                   // sqrt(n)
                isPrima = false;                                // BC: 1 | WC: 0
                break;                                          // BC: 1 | WC: 0
            }
        }
    }

    if (isPrima) {                                              // 1
        cout << n << " adalah BILANGAN PRIMA.\n";               // 1
    } else {
        cout << n << " BUKAN bilangan prima.\n";                // 1
    }

    return 0;                                                   // 1
}

/*
====================================================================
ANALISIS KOMPLEKSITAS (SLIDE 20 PAA 9)
====================================================================
- Best Case (BC)  : n bilangan genap (>2), langsung berhenti di i=2 -> Omega(1)
- Worst Case (WC) : n adalah bilangan prima, loop berjalan penuh hingga sqrt(n)
  T(n) = O(sqrt(n))
- Kompleksitas Ruang S(n) = O(1) [Konstan]
====================================================================
*/
