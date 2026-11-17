#include <iostream>
#include <iomanip>

using namespace std;

long long fibonacciManual(int n, long long &langkahIterasi)
{
    langkahIterasi = 0;
    if (n == 1 || n == 2)
    {
        langkahIterasi = 1;
        return 1;
    }

    long long f1 = 1;
    long long f2 = 1;
    long long fn = 0;

    for (int i = 3; i <= n; i++)
    {
        langkahIterasi++;
        fn = f1 + f2;
        f1 = f2;
        f2 = fn;
    }

    return fn;
}

long long fibonacciRekursif(int n, long long &jumlahPanggilan)
{
    jumlahPanggilan++;
    if (n == 1 || n == 2)
    {
        return 1;
    }
    else
    {

        return fibonacciRekursif(n - 1, jumlahPanggilan) + fibonacciRekursif(n - 2, jumlahPanggilan);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cout << "=== SOAL 3 UTS: FIBONACCI MANUAL VS REKURSIF ===\n";
    cout << "Masukkan suku ke-n yang dicari (n >= 1): ";
    if (!(cin >> n) || n <= 0)
    {
        cerr << "Nilai n harus bilangan bulat positif (>= 1)!\n";
        return 1;
    }

    if (n > 40)
    {
        cout << "[Peringatan]: Nilai n > 40 membuat rekursif berjalan sangat lambat.\n";
    }

    long long langkahManual = 0;
    long long panggilanRekursif = 0;

    long long hasilManual = fibonacciManual(n, langkahManual);
    long long hasilRekursif = fibonacciRekursif(n, panggilanRekursif);

    cout << "\nDeret Fibonacci (1 s.d. " << n << "): ";
    long long dummy = 0;
    for (int i = 1; i <= n; i++)
    {
        cout << fibonacciManual(i, dummy) << (i < n ? ", " : "\n");
    }

    cout << "\n"
         << string(62, '=') << "\n";
    cout << left << setw(28) << "Parameter Analisis"
         << setw(17) << "Manual (Iteratif)"
         << setw(17) << "Rekursif" << "\n";
    cout << string(62, '-') << "\n";
    cout << left << setw(28) << ("Nilai Suku ke-" + to_string(n))
         << setw(17) << hasilManual
         << setw(17) << hasilRekursif << "\n";
    cout << left << setw(28) << "Beban Operasi / Call"
         << setw(17) << (to_string(langkahManual) + " iterasi")
         << setw(17) << (to_string(panggilanRekursif) + " call") << "\n";
    cout << left << setw(28) << "Kompleksitas Waktu T(n)"
         << setw(17) << "O(n) [Linier]"
         << setw(17) << "O(2^n) [Eksponensial]" << "\n";
    cout << left << setw(28) << "Kompleksitas Ruang S(n)"
         << setw(17) << "O(1) [Konstan]"
         << setw(17) << "O(n) [Call Stack]" << "\n";
    cout << string(62, '=') << "\n";

    return 0;
}