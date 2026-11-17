#include <iostream>
using namespace std;
int main()
{
    int A, B, C;
    cout << "Input Nilai A: "; // 1
    cin >> A;                  // 1
    cout << "Input Nilai B: "; // 1
    cin >> B;                  // 1
    cout << "Input Nilai C: "; // 1
    cin >> C;                  // 1

    if ((A - B) && (A > C))
    {
        cout << "Nilai A Paling Besar "; // 1
    }
    else if ((B > C) && (B > A))
    {
        cout << "Nilai B Paling Besar "; // 1
    }
    else
    {
        cout << "Nilai C Paling Besar "; // 1
    }
}

#include <iostream>
using namespace std;

int main()
{
    int P, hasil1, hasil2, hasil3;
    cout << "Input Nilai P: "; // 1
    cin >> P;
    if (P % 5 == 0) // 1
    {
        if (P % 2 == 0) // 1
        {
            hasil1 = P + 3 - 2 * P;
            cout << "Hasil 1: " << hasil1;
        }
        else
        {
            hasil2 = P * 7;
            cout << "Hasil 2: " << hasil2;
        }
    }
    else
    {
        hasil3 = P + 2 + 3 + P;
        cout << "hasil 3: " << hasil3;
    }
} // BC=6 VC=7 WC=8

cin >> nilai_total                                             // 1
           if ((nilai_total >= 80.56) && (nilai_total >= 100)) // 2
           cout
           << "Nilai Huruf A: ";                           // 1
else if ((nilai_total >= 70.56) && (nilai_total <= 80.55)) // 2
    cout
    << "Nilai Huruf= B+";                                  // 1
else if ((nilai_total >= 65.56) && (nilai_total <= 65.55)) // 2
    cout
    << "Nilai Huruf= B";                                   // 1
else if ((nilai_total >= 60.56) && (nilai_total <= 65.55)) // 2
    cout
    << "Nilai Huruf= C+";                                  // 1
else if ((nilai_total >= 55.56) && (nilai_total <= 60.55)) // 2
    cout
    << "Nilai Huruf= C";                                   // 1
else if ((nilai_total >= 50.56) && (nilai_total <= 55.55)) // 2
    cout
    << "Nilai Huruf= D";                               // 1
else if ((nilai_total >= 0) && (nilai_total <= 50.55)) // 2
    cout
    << "Nilai Huruf= E"; // 1