#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int M, N;
    cout << "=== PROGRAM MATRIKS NILAI MAHASISWA (PAA) ===\n";
    cout << "Masukkan jumlah Mata Kuliah (M - Baris) : ";
    if (!(cin >> M) || M <= 0)
        return 1;

    cout << "Masukkan jumlah Mahasiswa   (N - Kolom) : ";
    if (!(cin >> N) || N <= 0)
        return 1;

    vector<vector<int>> nilai(M, vector<int>(N));

    cout << "\nInput Nilai Matriks [" << M << " x " << N << "]:\n";
    for (int i = 0; i < M; i++)
    {
        cout << "Nilai Matkul ke-" << (i + 1) << " untuk " << N << " mhs (pisahkan spasi): ";
        for (int j = 0; j < N; j++)
        {
            cin >> nilai[i][j];
        }
    }

    cout << "\n"
         << string(60, '=') << "\n";
    cout << "TABEL NILAI MATA KULIAH x MAHASISWA & HASIL AKUMULASI (= ?)\n";
    cout << string(60, '=') << "\n";

    cout << left << setw(12) << "Matkul \\ Mhs";
    for (int j = 0; j < N; j++)
    {
        cout << setw(8) << ("Mhs " + to_string(j + 1));
    }
    cout << setw(10) << "Total" << setw(10) << "Rata-rata" << "\n";
    cout << string(60, '-') << "\n";

    for (int i = 0; i < M; i++)
    {
        int totalMatkul = 0;
        cout << left << setw(12) << ("Matkul " + to_string(i + 1));

        for (int j = 0; j < N; j++)
        {
            cout << setw(8) << nilai[i][j];
            totalMatkul += nilai[i][j];
        }

        double rataRata = static_cast<double>(totalMatkul) / N;

        cout << "= " << setw(8) << totalMatkul
             << fixed << setprecision(2) << setw(10) << rataRata << "\n";
    }
    cout << string(60, '=') << "\n";

    return 0;
}