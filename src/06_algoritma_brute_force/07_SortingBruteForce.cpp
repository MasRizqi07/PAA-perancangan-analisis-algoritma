#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, t;                                                   // deklarasi variabel

    cout << "=== 7. BRUTE FORCE: SORTING (PENGURUTAN) ===\n";   // 1
    cout << "Masukkan jumlah elemen (n): ";                     // 1
    cin >> n;                                                   // 1

    vector<int> data(n);                                        // n
    for (int i = 0; i < n; i++) {                               // 1   // n   // n
        cout << "Masukkan data ke-" << i << " = ";              // n
        cin >> data[i];                                         // n
    }

    cout << "\nHasil pengurutan (Ascending): ";                 // 1
    // Perbaikan dari slide 22: batas inner loop j < n agar tidak out-of-bounds
    for (int i = 0; i < n; i++) {                               // 1   // n   // n
        for (int j = i + 1; j < n; j++) {                       // n   // n(n-1)/2   // n(n-1)/2
            if (data[i] > data[j]) {                            // n(n-1)/2
                t = data[i];                                    // BC: 0 | WC: n(n-1)/2
                data[i] = data[j];                              // BC: 0 | WC: n(n-1)/2
                data[j] = t;                                    // BC: 0 | WC: n(n-1)/2
            }
        }
        cout << data[i] << "  ";                                // n
    }
    cout << "\n";                                               // 1

    return 0;                                                   // 1
}

/*
====================================================================
ANALISIS KOMPLEKSITAS (SLIDE 21-22 PAA 9)
====================================================================
- Jumlah perbandingan elemen: n(n - 1) / 2
- Best Case (Data sudah terurut, 0 swap)   : Omega(n^2)
- Worst Case (Data terbalik, penuh swap)   : O(n^2) [Kuadratik]
- Kompleksitas Ruang S(n) = O(n) (in-place sorting dengan 1 temp variabel)
====================================================================
*/
