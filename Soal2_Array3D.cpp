#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cout << "=== SOAL 2 UTS: ARRAY 3 DIMENSI & PENGUJIAN ===\n";
    cout << "Masukkan ukuran dimensi kubik Array 3D (n): ";
    if (!(cin >> n) || n <= 0)
    {
        cerr << "Ukuran n harus bilangan bulat positif!\n";
        return 1;
    }

    vector<vector<vector<int>>> data(n, vector<vector<int>>(n, vector<int>(n)));

    cout << "\nMasukkan " << (n * n * n) << " elemen nilai:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                cout << "data[" << i << "][" << j << "][" << k << "] = ";
                cin >> data[i][j][k];
            }
        }
    }

    int jumlahLulus = 0;
    cout << "\n--- Hasil Pengujian Nilai >= 75 ---\n";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                if (data[i][j][k] >= 75)
                {
                    jumlahLulus = jumlahLulus + 1;
                    cout << "-> Lulus pada indeks [" << i << "][" << j << "][" << k
                         << "] dengan nilai: " << data[i][j][k] << "\n"; // Cost: m
                }
            }
        }
    }

    cout << "\nTotal data yang lulus pengujian (>= 75): " << jumlahLulus << "\n";
    return 0;
}