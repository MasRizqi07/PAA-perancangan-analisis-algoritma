#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int p;
    std::cout << "Input Nilai P: ";
    if (!(std::cin >> p))
    {
        return 1;
    }

    // Komputasi in-place: evaluasi langsung ke output tanpa variabel hasil1..hasil3
    if (p % 5 == 0)
    {
        // Bitwise (p & 1) menggantikan p % 2 untuk efisiensi siklus instruksi
        if ((p & 1) == 0)
        {
            std::cout << "Hasil 1: " << (3 - p) << '\n'; // Disederhanakan dari P + 3 - 2*P
        }
        else
        {
            std::cout << "Hasil 2: " << (p * 7) << '\n';
        }
    }
    else
    {
        std::cout << "hasil 3: " << (2 * p + 5) << '\n'; // Disederhanakan dari P + 2 + 3 + P
    }

    return 0;
}