#include <iostream>
#include <iomanip>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    constexpr double PI = 3.14159265358979323846;
    double panjang = 0.0;
    double lebar = 0.0;
    double jariJari = 0.0;

    std::cout << "--- Program Hitung Luas Daerah Arsir ---\n";
    std::cout << "Masukkan panjang persegi panjang : ";
    std::cin >> panjang;
    std::cout << "Masukkan lebar persegi panjang   : ";
    std::cin >> lebar;
    std::cout << "Masukkan jari-jari lingkaran     : ";
    std::cin >> jariJari;

    if (panjang <= 0 || lebar <= 0 || jariJari <= 0)
    {
        std::cerr << "Peringatan: Nilai dimensi harus lebih besar dari 0.\n";
        return 1;
    }

    const double luasPersegiPanjang = panjang * lebar;
    const double luasLingkaran = PI * jariJari * jariJari;
    const double luasArsir = luasPersegiPanjang - luasLingkaran;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\nLuas Persegi Panjang : " << luasPersegiPanjang << '\n';
    std::cout << "Luas Lingkaran       : " << luasLingkaran << '\n';
    std::cout << "Hasil Luas Arsir     : " << luasArsir << '\n';

    return 0;
}