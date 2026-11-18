#include <iostream>
#include <algorithm>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int a, b, c;
    std::cout << "Masukkan nilai A, B, dan C: ";
    if (!(std::cin >> a >> b >> c))
    {
        return 1;
    }

    // Pendekatan fungsional & bebas bug (menggunakan std::max)
    const int maksimum = std::max({a, b, c});
    std::cout << "Nilai terbesar adalah: " << maksimum << '\n';

    return 0;
}