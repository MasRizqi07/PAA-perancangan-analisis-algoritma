#include <iostream>
#include <vector>

using namespace std;

void cetakArray(const vector<int> &arr)
{
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << "\n";
}

void bubbleSort(vector<int> arr, long long &langkahKomparasi, long long &langkahSwap)
{
    int n = arr.size();
    langkahKomparasi = 0;
    langkahSwap = 0;
    bool adaPertukaran;

    for (int i = 0; i < n - 1; i++)
    {
        adaPertukaran = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            langkahKomparasi++;
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                langkahSwap++;
                adaPertukaran = true;
            }
        }
        if (!adaPertukaran)
            break;
    }

    cout << "Hasil Bubble Sort    : ";
    cetakArray(arr);
    cout << "  -> Jumlah Perbandingan (Komparasi) : " << langkahKomparasi << "\n";
    cout << "  -> Jumlah Pertukaran (Swap)        : " << langkahSwap << "\n\n";
}

void insertionSort(vector<int> arr, long long &langkahKomparasi, long long &langkahGeser)
{
    int n = arr.size();
    langkahKomparasi = 0;
    langkahGeser = 0;

    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0)
        {
            langkahKomparasi++;
            if (arr[j] > key)
            {
                arr[j + 1] = arr[j];
                langkahGeser++;
                j--;
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = key;
    }

    cout << "Hasil Insertion Sort : ";
    cetakArray(arr);
    cout << "  -> Jumlah Perbandingan (Komparasi) : " << langkahKomparasi << "\n";
    cout << "  -> Jumlah Pergeseran (Shift)       : " << langkahGeser << "\n\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cout << "=======================================================\n";
    cout << "   PROGRAM ANALISIS PAA: SORTING & KOMPLEKSITAS RUANG  \n";
    cout << "=======================================================\n";

    cout << "Masukkan jumlah elemen (N): ";
    if (!(cin >> n) || n <= 0)
    {
        cerr << "Jumlah elemen harus integer positif!\n";
        return 1;
    }

    vector<int> dataAcak(n);
    cout << "Masukkan " << n << " bilangan untuk DATA ACAK (pisahkan spasi):\n";
    for (int i = 0; i < n; i++)
    {
        cin >> dataAcak[i];
    }

    vector<int> dataHampirUrut(n);
    cout << "\nMasukkan " << n << " bilangan untuk DATA HAMPIR TERURUT (pisahkan spasi):\n";
    for (int i = 0; i < n; i++)
    {
        cin >> dataHampirUrut[i];
    }

    long long komparasi = 0, pergerakan = 0;

    cout << "\n-------------------------------------------------------\n";
    cout << "           PENGUJIAN 1: PADA DATA ACAK                 \n";
    cout << "-------------------------------------------------------\n";
    cout << "Data Asli: ";
    cetakArray(dataAcak);
    cout << "\n";

    bubbleSort(dataAcak, komparasi, pergerakan);
    insertionSort(dataAcak, komparasi, pergerakan);

    cout << "-------------------------------------------------------\n";
    cout << "       PENGUJIAN 2: PADA DATA HAMPIR TERURUT           \n";
    cout << "-------------------------------------------------------\n";
    cout << "Data Asli: ";
    cetakArray(dataHampirUrut);
    cout << "\n";

    bubbleSort(dataHampirUrut, komparasi, pergerakan);
    insertionSort(dataHampirUrut, komparasi, pergerakan);

    cout << "=======================================================\n";
    return 0;
}