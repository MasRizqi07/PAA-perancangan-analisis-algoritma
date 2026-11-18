#include <iostream>
using namespace std;

int main()
{
    int hadir;    // deklarasi variabel
    double nilai; // deklarasi variabel

    cout << "=== SOAL 1 UTS: IF BERSARANG & MAJEMUK ===\n"; // 1
    cout << "Masukkan Persentase Kehadiran (0-100) : ";     // 1
    cin >> hadir;                                           // 1
    cout << "Masukkan Nilai Akhir (0-100)          : ";     // 1
    cin >> nilai;                                           // 1

    if (hadir >= 75)
    { // 1 (kondisi tunggal)
        if ((nilai >= 85.0) && (hadir >= 90))
        {                                                  // 2 (kondisi majemuk &&)
            cout << "Status: Lulus Cumlaude & Beasiswa\n"; // 1
        }
        else if ((nilai >= 70.0) && (nilai < 85.0))
        {                                        // 2 (kondisi majemuk &&)
            cout << "Status: Lulus Memuaskan\n"; // 1
        }
        else
        {
            cout << "Status: Lulus Cukup\n"; // 1
        }
    }
    else
    {
        cout << "Status: Tidak Lulus (Kehadiran < 75%)\n"; // 1
    }

    return 0; // 1
}

/*
====================================================================
ANALISIS KOMPLEKSITAS SOAL 1
====================================================================
1. Input/Output Awal (3 cout + 2 cin) = 5 langkah
2. Best Case (BC) -> Input hadir < 75 (misal: hadir = 60):
   - Input awal (5) + uji if luar (1) + cout else luar (1) + return (1)
   - Total BC = 8 langkah -> Omega(1)
3. Average Case (AC/VC) -> Input hadir = 95, nilai = 90 (lolos cabang 1):
   - Input awal (5) + uji if luar (1) + uji if dalam 1 (2) + cout (1) + return (1)
   - Total AC = 10 langkah -> Theta(1)
4. Worst Case (WC) -> Input hadir = 80, nilai = 60 (masuk else terdalam):
   - Input awal (5) + uji if luar (1) + uji if dalam 1 (2) + uji else if (2) + cout else (1) + return (1)
   - Total WC = 12 langkah -> O(1) [Konstan]
5. Kompleksitas Ruang S(n):
   - Hanya memakai 2 variabel skalar (hadir = 4 byte, nilai = 8 byte)
   - S(n) = Konstanta (12 byte) = O(1)
====================================================================
*/