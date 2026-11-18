#include <iostream>
#include <iomanip>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    // Konstanta presisi tinggi pada level kompilasi
    constexpr double PI = 3.14159265358979323846;
    double p, l, r;

    // Membaca ketiga input sekaligus
    if (!(std::cin >> p >> l >> r) || p <= 0 || l <= 0 || r <= 0)
    {
        return 1;
    }

    // Komputasi in-place: langsung ke output stream tanpa variabel penampung
    std::cout << std::fixed << std::setprecision(2)
              << ((p * l) - (PI * r * r)) << '\n';

    return 0;
}