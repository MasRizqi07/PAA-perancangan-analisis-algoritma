#include <iostream>

int main()
{
    // Memutus overhead sinkronisasi I/O standar C
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    long long n;
    if (!(std::cin >> n))
    {
        return 1;
    }

    // Evaluasi bitwise LSB: 1 instruksi mesin, 0 siklus pembagian
    std::cout << ((n & 1) ? "Ganjil\n" : "Genap\n");

    return 0;
}