#include <iostream>
#include <vector>
#include <cmath>
#include <limits>
#include <iomanip>
using namespace std;

struct Titik {
    double x;
    double y;
};

int main() {
    int n;                                                      // jumlah titik

    cout << "=== 10. BRUTE FORCE: CLOSEST PAIR OF POINTS ===\n"; // 1
    cout << "Masukkan jumlah titik (n >= 2): ";                 // 1
    cin >> n;                                                   // 1

    if (n < 2) {                                                // 1
        cerr << "Minimal dibutuhkan 2 titik!\n";
        return 1;
    }

    vector<Titik> titik(n);                                     // n
    for (int i = 0; i < n; i++) {                               // 1   // n   // n
        cout << "Titik ke-" << (i + 1) << " (x y): ";           // n
        cin >> titik[i].x >> titik[i].y;                        // n
    }

    double jarakMin = numeric_limits<double>::max();            // 1
    int titik1 = 0, titik2 = 1;                                 // 1

    // Hitung jarak Euclidean untuk C(n, 2) = n(n - 1)/2 pasangan titik
    for (int i = 0; i < n - 1; i++) {                           // 1   // (n-1)   // (n-1)
        for (int j = i + 1; j < n; j++) {                       // (n-1)   // n(n-1)/2   // n(n-1)/2
            double dx = titik[i].x - titik[j].x;                // n(n-1)/2
            double dy = titik[i].y - titik[j].y;                // n(n-1)/2
            double jarak = sqrt(dx * dx + dy * dy);             // n(n-1)/2

            if (jarak < jarakMin) {                             // n(n-1)/2
                jarakMin = jarak;                               // BC: 0 | WC: n(n-1)/2
                titik1 = i;                                     // BC: 0 | WC: n(n-1)/2
                titik2 = j;                                     // BC: 0 | WC: n(n-1)/2
            }
        }
    }

    cout << fixed << setprecision(4);                           // 1
    cout << "\nPasangan titik terdekat:\n";                    // 1
    cout << "Titik " << (titik1 + 1) << " (" << titik[titik1].x << ", " << titik[titik1].y << ") dan "
         << "Titik " << (titik2 + 1) << " (" << titik[titik2].x << ", " << titik[titik2].y << ")\n"; // 1
    cout << "Jarak Euclidean terdekat = " << jarakMin << "\n";  // 1

    return 0;                                                   // 1
}

/*
====================================================================
ANALISIS KOMPLEKSITAS (SLIDE 34 PAA 9)
====================================================================
- Total evaluasi pasangan titik: C(n, 2) = n(n - 1) / 2
- Kompleksitas Waktu T(n) = O(n^2) [Kuadratik]
- Kompleksitas Ruang S(n) = O(n)
====================================================================
*/
