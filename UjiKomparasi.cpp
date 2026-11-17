#include <iostream>
#include <iomanip>

using namespace std;

// 1. Rekursif dengan pencacah langkah pemanggilan fungsi
unsigned long long hitungRekursif(int n, int &kedalamanStack)
{
    kedalamanStack++;
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * hitungRekursif(n - 1, kedalamanStack);
}

// 2. Iteratif dengan pencacah iterasi loop
unsigned long long hitungIteratif(int n, int &jumlahPerkalian)
{
    unsigned long long hasil = 1;
    jumlahPerkalian = 0;

    if (n > 0)
    {
        for (int i = n; i >= 1; i--)
        {
            hasil *= i;
            jumlahPerkalian++;
        }
    }
    return hasil;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cout << "============================================================\n";
    cout << "   KOMPARASI PAA: FAKTORIAL REKURSIF VS ITERATIF            \n";
    cout << "============================================================\n";
    cout << "Input data positif (N): ";

    if (!(cin >> n) || n < 0)
    {
        cerr << "Error: Masukkan integer >= 0!\n";
        return 1;
    }

    if (n > 20)
    {
        cout << "\n[Catatan]: Nilai N > 20 melebihi kapasitas 64-bit integer.\n";
        cout << "Gunakan rentang 0 - 20 untuk presisi aritmetika penuh.\n\n";
    }

    // Uji Rekursif
    int kedalamanStack = 0;
    unsigned long long hasilRek = hitungRekursif(n, kedalamanStack);

    // Uji Iteratif
    int langkahIterasi = 0;
    unsigned long long hasilIter = hitungIteratif(n, langkahIterasi);

    // Output Hasil
    cout << "\n"
         << string(60, '=') << "\n";
    cout << left << setw(28) << "Parameter Pengujian"
         << setw(16) << "Rekursif"
         << setw(16) << "Iteratif" << "\n";
    cout << string(60, '-') << "\n";

    cout << left << setw(28) << "Output Nilai Faktorial"
         << setw(16) << hasilRek
         << setw(16) << hasilIter << "\n";

    cout << left << setw(28) << "Beban Pemanggilan Stack"
         << setw(16) << (to_string(kedalamanStack) + " frame")
         << setw(16) << "1 frame (Tetap)" << "\n";

    cout << left << setw(28) << "Kompleksitas Waktu T(n)"
         << setw(16) << "O(n)"
         << setw(16) << "O(n)" << "\n";

    cout << left << setw(28) << "Kompleksitas Ruang S(n)"
         << setw(16) << "O(n)"
         << setw(16) << "O(1) [Mangkus]" << "\n";
    cout << string(60, '=') << "\n";

    return 0;
}