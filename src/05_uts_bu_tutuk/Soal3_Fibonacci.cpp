#include <iostream>
using namespace std;

// 1. FUNGSI FIBONACCI MANUAL (ITERATIF)
long long fibonacciManual(int n)
{
    if ((n == 1) || (n == 2))
    {             // 2 (Best Case: langsung berhenti jika n=1 atau n=2)
        return 1; // 1
    }

    long long f1 = 1; // 1
    long long f2 = 1; // 1
    long long fn = 1; // 1

    for (int i = 3; i <= n; i++)
    {                 // 1   // (n-2)   // (n-2)
        fn = f1 + f2; // (n-2)
        f1 = f2;      // (n-2)
        f2 = fn;      // (n-2)
    }

    return fn; // 1
}

// 2. FUNGSI FIBONACCI REKURSIF (Sesuai Slide 22 Materi Rekursif)
long long fibonacciRekursif(int n)
{
    if ((n == 1) || (n == 2))
    {             // 2 (Base Case)
        return 1; // 1
    }
    else
    {
        return fibonacciRekursif(n - 1) + fibonacciRekursif(n - 2); // 2^n (Recursive Case bercabang dua)
    }
}

int main()
{
    int n; // deklarasi variabel

    cout << "=== SOAL 3 UTS: FIBONACCI MANUAL & REKURSIF ===\n"; // 1
    cout << "Masukkan suku ke-n yang dicari (n >= 1): ";         // 1
    cin >> n;                                                    // 1

    cout << "\nDeret Fibonacci (1 s.d. " << n << "): "; // 1
    for (int i = 1; i <= n; i++)
    {                                      // 1   // n   // n
        cout << fibonacciManual(i) << " "; // n
    }
    cout << "\n"; // 1

    cout << "\n--- Hasil Suku ke-" << n << " ---\n";                       // 1
    cout << "Hasil Fibonacci Manual   = " << fibonacciManual(n) << "\n";   // 1 + T_manual(n)
    cout << "Hasil Fibonacci Rekursif = " << fibonacciRekursif(n) << "\n"; // 1 + T_rekursif(n)

    return 0; // 1
}

/*
====================================================================
ANALISIS KOMPLEKSITAS SOAL 3
====================================================================
1. Fibonacci Manual (Iteratif):
   - Best Case (n = 1 atau n = 2):
     Uji kondisi (2) + return 1 (1) = 3 langkah -> Omega(1)
   - Worst Case (n > 2):
     Uji if (2) + inisialisasi f1,f2,fn (3) + header loop (1 + 2(n-2))
     + body loop (3(n-2)) + return (1)
     T_manual(n) = 2 + 3 + 1 + 2n - 4 + 3n - 6 + 1 = 5n - 3 -> O(n) [Linier]
   - Kompleksitas Ruang S(n):
     Hanya memakai 4 variabel skalar tetap (f1, f2, fn, i) -> S(n) = O(1)

2. Fibonacci Rekursif:
   - Best Case (n = 1 atau n = 2):
     Uji base case (2) + return 1 (1) = 3 langkah -> Omega(1)
   - Worst Case (n > 2):
     Setiap pemanggilan memecah menjadi 2 pemanggilan baru F(n-1) dan F(n-2)
     T_rekursif(n) = O(2^n) [Eksponensial]
   - Kompleksitas Ruang S(n):
     Menumpuk call stack di memori sedalam n tingkat -> S(n) = O(n)

3. Kesimpulan Perbandingan:
   - Fibonacci Manual jauh lebih mangkus (efisien) dibanding Rekursif karena
     waktu eksekusi berorde linier O(n) vs eksponensial O(2^n), serta memori
     konstan O(1) vs linier O(n).
====================================================================
*/