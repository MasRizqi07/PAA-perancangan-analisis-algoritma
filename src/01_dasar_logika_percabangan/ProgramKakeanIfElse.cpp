#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    double nilai_total;

    std::cout << "Masukkan Nilai Total: ";
    if (!(std::cin >> nilai_total) || nilai_total < 0 || nilai_total > 100)
    {
        std::cerr << "Input tidak valid! Masukkan rentang 0 - 100.\n";
        return 1;
    }

    if (nilai_total >= 80.56 && nilai_total <= 100.0)
    {
        std::cout << "Nilai Huruf: A\n";
    }
    else if (nilai_total >= 70.56 && nilai_total <= 80.55)
    {
        std::cout << "Nilai Huruf: B+\n";
    }
    else if (nilai_total >= 65.56 && nilai_total <= 70.55)
    {
        std::cout << "Nilai Huruf: B\n";
    }
    else if (nilai_total >= 60.56 && nilai_total <= 65.55)
    {
        std::cout << "Nilai Huruf: C+\n";
    }
    else if (nilai_total >= 55.56 && nilai_total <= 60.55)
    {
        std::cout << "Nilai Huruf: C\n";
    }
    else if (nilai_total >= 50.56 && nilai_total <= 55.55)
    {
        std::cout << "Nilai Huruf: D\n";
    }
    else if (nilai_total >= 0.0 && nilai_total <= 50.55)
    {
        std::cout << "Nilai Huruf: E\n";
    }

    return 0;
}