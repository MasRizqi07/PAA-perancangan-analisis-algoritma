#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cout << "Masukkan jumlah elemen data (N): ";
    if (!(cin >> n) || n <= 0)
    {
        return 1;
    }

    vector<int> data(n);
    cout << "Inputkan " << n << " bilangan (pisahkan dengan spasi):\n";
    for (int i = 0; i < n; i++)
    {
        cin >> data[i];
    }

    int cari;
    cout << "Masukkan nilai target yang dicari: ";
    cin >> cari;

    int jumlah = 0;

    cout << "\n--- Proses Pencarian Sekuensial ---\n";
    for (int i = 0; i < n; i++)
    {
        if (data[i] == cari)
        {
            cout << "-> Target ditemukan pada posisi ke-" << (i + 1) << "\n";
            jumlah = jumlah + 1;
        }
    }

    if (jumlah > 0)
    {
        cout << "Status: Data berhasil ditemukan sebanyak " << jumlah << " kali.\n";
    }
    else
    {
        cout << "Status: Data TIDAK ditemukan dalam larik.\n";
    }

    return 0;
}