#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    double nilai;
    int hadir;

    cout << "=== SOAL 1 UTS: IF BERSARANG & MAJEMUK ===\n";
    cout << "Masukkan Persentase Kehadiran (0-100) : ";
    if (!(cin >> hadir) || hadir < 0 || hadir > 100)
    {
        cerr << "Input kehadiran tidak valid!\n";
        return 1;
    }

    cout << "Masukkan Nilai Akhir (0-100)          : ";
    if (!(cin >> nilai) || nilai < 0 || nilai > 100)
    {
        cerr << "Input nilai tidak valid!\n";
        return 1;
    }

    cout << "\nHasil Evaluasi: ";
    if (hadir >= 75)
    {
        if (nilai >= 85.0 && hadir >= 90)
        {
            cout << "Lulus Cumlaude + Layak Beasiswa\n";
        }
        else if (nilai >= 70.0 && nilai < 85.0)
        {
            cout << "Lulus Memuaskan\n";
        }
        else
        {
            cout << "Lulus Cukup (Disarankan Perbaikan)\n";
        }
    }
    else
    {
        cout << "Tidak Lulus (Kehadiran Kurang dari 75%)\n";
    }

    return 0;
}