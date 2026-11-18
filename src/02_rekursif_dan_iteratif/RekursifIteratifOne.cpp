#include <iostream>

using namespace std;

unsigned long long faktorialRekursif(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * faktorialRekursif(n - 1);
    }
}

unsigned long long faktorialIteratif(int n)
{
    unsigned long long hasil = 1;

    if (n > 0)
    {
        for (int i = n; i >= 1; i--)
        {
            hasil = hasil * i;
        }
    }
    else
    {
        return 1;
    }

    return hasil;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cout << "====================================================\n";
    cout << "  UJI BANDING FAKTORIAL: REKURSIF VS ITERATIF (PAA) \n";
    cout << "====================================================\n";
    cout << "masukkan nilai n = ";
    if (!(cin >> n) || n < 0)
    {
        cerr << "Input tidak valid! Masukkan bilangan bulat non-negatif.\n";
        return 1;
    }

    unsigned long long hasilRek = faktorialRekursif(n);
    unsigned long long hasilIter = faktorialIteratif(n);

    cout << "\n--- Hasil Komputasi ---\n";
    cout << "Hasil Faktorial Rekursif = " << hasilRek << "\n";
    cout << "Hasil Faktorial Iteratif = " << hasilIter << "\n";

    cout << "\n--- Analisis Kemangkusan (Materi Slide 5, 7, 18, 19) ---\n";
    cout << "Metode Rekursif : T(n) = O(n), S(n) = O(n) [Perlu memori stack besar]\n";
    cout << "Metode Iteratif : T(n) = O(n), S(n) = O(1) [Lebih mangkus & hemat memori]\n";
    cout << "====================================================\n";

    return 0;
}