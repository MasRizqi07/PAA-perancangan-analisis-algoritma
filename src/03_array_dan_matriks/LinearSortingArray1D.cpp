#include <iostream>
#include <vector>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    const int nilai[] = {80, 70, 55, 75, 65, 70, 90, 70, 65};
    const int n = sizeof(nilai) / sizeof(nilai[0]);
    const int target = 70;

    int jumlahData = 0;
    vector<int> posisi;

    cout << "Data Array: [ ";
    for (int i = 0; i < n; i++)
    {
        cout << nilai[i] << " ";
    }
    cout << "]\n";
    cout << "Cari nilai: " << target << "\n\n";

    for (int i = 0; i < n; i++)
    {
        if (nilai[i] == target)
        {
            jumlahData++;
            posisi.push_back(i);
            cout << "-> Ditemukan kemunculan ke-" << jumlahData
                 << " pada indeks array [" << i
                 << "] (urutan posisi ke-" << (i + 1) << ")\n";
        }
    }

    cout << "\n----------------------------------------\n";
    if (jumlahData > 0)
    {
        cout << "Status      : Data Berhasil Ditemukan\n";
        cout << "Jumlah data : " << jumlahData << "\n";
        cout << "Daftar posisi (1-based): ";
        for (size_t k = 0; k < posisi.size(); k++)
        {
            cout << (posisi[k] + 1) << (k + 1 < posisi.size() ? ", " : "\n");
        }
    }
    else
    {
        cout << "Status      : Data " << target << " Tidak Ditemukan\n";
        cout << "Jumlah data : 0\n";
    }
    cout << "----------------------------------------\n";

    return 0;
}