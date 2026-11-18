#include <iostream>

using namespace std;

// 1. FUNGSI PANGKAT ITERATIF (Sesuai Bagan Alir / Flowchart Papan Tulis)
long long pangkatIteratif(long long B, int P)
{
    long long hasil = 1; // Cost: 1

    // Kondisi belah ketupat flowchart: if (P > 0)
    if (P > 0)
    { // Cost: 1
        // Loop segienam flowchart: for (i = 1; i <= P; i++)
        for (int i = 1; i <= P; i++)
        {                      // Cost: 1 + 2n (init: 1, test: n, inc: n)
            hasil = hasil * B; // Cost: n
        }
    }
    else
    {
        // Jika P = 0, langsung cetak hasil = 1 (T / False branch)
        return 1; // Cost: 1
    }

    return hasil; // Cost: 1
}

// 2. FUNGSI PANGKAT REKURSIF (Sesuai Slide Proyektor Slide 20)
long long pangkatRekursif(long long X, int n)
{
    // Basis rekursi di slide: if n = 1 return X
    if (n == 0)
    {
        return 1; // Penanganan matematis untuk n = 0
    }
    if (n == 1)
    {             // Cost: 1
        return X; // Cost: 1
    }
    else
    {
        // Langkah rekursif: return (X * pangkat(X, n - 1))
        return X * pangkatRekursif(X, n - 1); // Cost: n
    }
}

int main()
{
    // Optimasi fast I/O stream C++
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long B; // Basis / Bilangan pokok
    int P;       // Pangkat / Eksponen

    cout << "====================================================\n";
    cout << "   PROGRAM PAA: HITUNG PANGKAT (ITERATIF & REKURSIF)\n";
    cout << "====================================================\n";

    // Input B dan P (Sesuai jajar genjang flowchart)
    cout << "Masukkan bilangan basis (B / X)   : "; // Cost: 1
    if (!(cin >> B))
        return 1;

    cout << "Masukkan bilangan pangkat (P / n) : "; // Cost: 1
    if (!(cin >> P) || P < 0)
    {
        cerr << "Pangkat harus bilangan bulat non-negatif!\n";
        return 1;
    }

    // Eksekusi kedua algoritma
    long long hasilIteratif = pangkatIteratif(B, P);
    long long hasilRekursif = pangkatRekursif(B, P);

    // Output Hasil
    cout << "\n---------------- Hasil Perhitungan ----------------\n";
    cout << "Hasil Pangkat Iteratif (Flowchart) = " << hasilIteratif << "\n";
    cout << "Hasil Pangkat Rekursif (Slide)     = " << hasilRekursif << "\n";
    cout << "----------------------------------------------------\n";

    return 0;
}