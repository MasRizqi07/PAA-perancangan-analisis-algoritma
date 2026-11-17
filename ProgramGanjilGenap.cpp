#include <iostream>

int main()
{
    long long n;

    std::cout << "Masukkan bilangan bulat (N): ";
    if (!(std::cin >> n))
    {
        std::cerr << "Input tidak valid!" << '\n';
        return 1;
    }

    std::cout << (n % 2 == 0 ? "Genap" : "Ganjil") << '\n';

    return 0;
}