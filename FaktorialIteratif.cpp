#include <iostream>

using namespace std;

unsigned long long faktorialIteratif(int n)
{
    unsigned long long hasil = 1; // Cost: 1 (inisialisasi awal)

    if (n > 0)
    { // Cost: 1 (evaluasi kondisi n > 0)
        // Loop for menurun sesuai instruksi flowchart
        for (int i = n; i >= 1; i--)
        {                      // Cost: 1 + 2n (init, test, decrement)
            hasil = hasil * i; // Cost: n (perkalian & penugasan)
        }
    }

    return hasil; // Cost: 1
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cout << "--- PROGRAM FAKTORIAL ITERATIF (FLOWCHART) ---\n";
    cout << "Input data positif: "; // Cost: 1
    if (!(cin >> n) || n < 0)
    { // Cost: 1
        cerr << "Input harus bilangan bulat positif / non-negatif!\n";
        return 1;
    }

    cout << "Hasil faktorial iteratif = " << faktorialIteratif(n) << "\n";

    return 0;
}