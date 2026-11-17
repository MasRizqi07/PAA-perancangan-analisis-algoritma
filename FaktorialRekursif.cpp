#include <iostream>

using namespace std;

// Fungsi Rekursif sesuai papan tulis Bu Tutuk
unsigned long long faktorialRekursif(int n)
{
    // Basis rekursi: jika n == 0 atau n == 1, kembalikan 1
    if (n == 0 || n == 1)
    {             // Cost: 2 (dua pengujian relasi)
        return 1; // Cost: 1
    }
    else
    {
        // Rekurens: panggil kembali fungsi dengan n - 1
        return n * faktorialRekursif(n - 1); // Cost: n (perkalian & fungsi call)
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cout << "--- PROGRAM FAKTORIAL REKURSIF ---\n";
    cout << "Input data positif: "; // Cost: 1
    if (!(cin >> n) || n < 0)
    { // Cost: 1
        cerr << "Input harus bilangan bulat positif / non-negatif!\n";
        return 1;
    }

    // Cost: 1 + T_rekursif(n)
    cout << "Hasil faktorial rekursif = " << faktorialRekursif(n) << "\n";

    return 0;
}