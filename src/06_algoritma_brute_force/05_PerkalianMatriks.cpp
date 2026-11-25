#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    int n;                                                      // ukuran ordo matriks n x n

    cout << "=== 5. BRUTE FORCE: PERKALIAN MATRIKS (n x n) ===\n"; // 1
    cout << "Masukkan ukuran dimensi matriks (n): ";            // 1
    cin >> n;                                                   // 1

    vector<vector<int>> A(n, vector<int>(n));                   // n^2
    vector<vector<int>> B(n, vector<int>(n));                   // n^2
    vector<vector<int>> C(n, vector<int>(n, 0));                // n^2

    cout << "\nInput Elemen Matriks A:\n";                      // 1
    for (int i = 0; i < n; i++) {                               // 1   // n   // n
        for (int j = 0; j < n; j++) {                           // n   // n^2   // n^2
            cout << "A[" << i << "][" << j << "] = ";           // n^2
            cin >> A[i][j];                                     // n^2
        }
    }

    cout << "\nInput Elemen Matriks B:\n";                      // 1
    for (int i = 0; i < n; i++) {                               // 1   // n   // n
        for (int j = 0; j < n; j++) {                           // n   // n^2   // n^2
            cout << "B[" << i << "][" << j << "] = ";           // n^2
            cin >> B[i][j];                                     // n^2
        }
    }

    // Algoritma Inti Perkalian Matriks Brute Force (Triple Nested Loop)
    for (int i = 0; i < n; i++) {                               // 1   // n   // n
        for (int j = 0; j < n; j++) {                           // n   // n^2   // n^2
            C[i][j] = 0;                                        // n^2
            for (int k = 0; k < n; k++) {                       // n^2   // n^3   // n^3
                C[i][j] = C[i][j] + (A[i][k] * B[k][j]);        // 2 * n^3 (n^3 kali + n^3 tambah)
            }
        }
    }

    cout << "\nHasil Perkalian Matriks C = A x B:\n";           // 1
    for (int i = 0; i < n; i++) {                               // 1   // n   // n
        for (int j = 0; j < n; j++) {                           // n   // n^2   // n^2
            cout << setw(6) << C[i][j];                         // n^2
        }
        cout << "\n";                                           // n
    }

    return 0;                                                   // 1
}

/*
====================================================================
ANALISIS KOMPLEKSITAS (SLIDE 18-19 PAA 9)
====================================================================
- Operasi perkalian dasar : n^3 kali
- Operasi penjumlahan     : n^3 kali
- Total operasi aritmetika: 2n^3
- Kompleksitas Waktu T(n) = O(n^3) [Kubik]
- Kompleksitas Ruang S(n) = 3 * n^2 -> O(n^2)
====================================================================
*/
