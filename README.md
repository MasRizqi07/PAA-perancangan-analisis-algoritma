# Perancangan dan Analisis Algoritma (PAA) — Semester 3

Repositori mandiri untuk mata kuliah **Perancangan dan Analisis Algoritma (PAA)** semester 3, Program Studi Teknik Informatika, Institut Teknologi Adhi Tama Surabaya (ITATS).

Dosen Pengampu: **Bu Tutuk**

---

## 📌 Deskripsi & Tujuan

Repositori ini memuat implementasi algoritma, studi kasus efisiensi komputasi, analisis kompleksitas waktu ($O(n)$) dan ruang ($Space$), perbandingan algoritma rekursif vs iteratif, manipulasi struktur data array multi-dimensi, hingga berkas tugas dan Ujian Tengah Semester (UTS).

Struktur folder ini telah dipisahkan secara mandiri agar proses penulisan, kompilasi, debugging, dan pengujian program C++ berjalan **bersih, rapi, terisolasi, aman, dan nyaman** tanpa tabrakan konfigurasi dengan folder bahasa/proyek lain.

---

## 📂 Struktur Repositori

```text
PAA-perancangan-analisis-algoritma/
├── .vscode/                               # Konfigurasi workspace VS Code
│   ├── c_cpp_properties.json              # IntelliSense & path compiler MinGW/UCRT64
│   ├── launch.json                        # Konfigurasi GDB Debugger
│   ├── settings.json                      # Konfigurasi Code Runner & editor
│   └── tasks.json                         # Build task g++ otomatis
├── output/                                # Folder penyimpanan file biner (.exe) [di-ignore Git]
├── AlgoritmaKompleks.cpp
├── Array2DPAA.cpp
├── ArsirKodeEfiisien.cpp
├── FaktorialIteratif.cpp
├── FaktorialRekursif.cpp
├── LinearSortingArray1D.cpp
├── LuasDaerahArsir.cpp
├── PencariNilaiTerbesar.cpp
├── PenentuGanjilGenap.cpp
├── PerpangkatanIteratifRekursif.cpp
├── Pertemuan-2-PAA.cpp
├── ProgramGanjilGenap.cpp
├── ProgramKakeanIfElse.cpp
├── ProgramKompleksitasRuang.cpp
├── ProgramPercabanganPAA.cpp
├── RekursifIteratifOne.cpp
├── Soal1_IfBersarang.cpp
├── Soal2_Array3D.cpp
├── Soal3_Fibonacci.cpp
├── UjiKomparasi.cpp
├── .gitignore
└── README.md
```

---

## 📚 Katalog Program & Studi Kasus

### 1. Ujian Tengah Semester (UTS PAA)
| Berkas | Deskripsi & Konsep |
| :--- | :--- |
| `Soal1_IfBersarang.cpp` | Logika pengkondisian bertingkat (nested if-else) untuk evaluasi skenario data dengan validasi input. |
| `Soal2_Array3D.cpp` | Pengolahan dan penelusuran matriks struktur data Array 3 Dimensi. |
| `Soal3_Fibonacci.cpp` | Analisis komparasi deret Fibonacci pendekatan Rekursif vs Iteratif beserta waktu kalkulasi. |

### 2. Analisis Kompleksitas & Optimasi Algoritma
| Berkas | Deskripsi & Konsep |
| :--- | :--- |
| `AlgoritmaKompleks.cpp` | Implementasi multi-loop bertingkat dan perhitungan efisiensi waktu komputasi. |
| `ProgramKompleksitasRuang.cpp` | Analisis kompleksitas memori (*Space Complexity*) serta pengurutan data (*Sorting*). |
| `ArsirKodeEfiisien.cpp` | Optimasi kalkulasi matematika luas daerah arsiran secara efisien tanpa perulangan berlebih. |
| `LuasDaerahArsir.cpp` | Perhitungan geometri daerah arsiran bidang. |

### 3. Rekursif vs Iteratif
| Berkas | Deskripsi & Konsep |
| :--- | :--- |
| `FaktorialIteratif.cpp` | Perhitungan faktorial pendekatan perulangan linier ($O(n)$ iteratif). |
| `FaktorialRekursif.cpp` | Perhitungan faktorial pendekatan pemanggilan fungsi rekursif (*call stack*). |
| `RekursifIteratifOne.cpp` | Evaluasi terintegrasi perbandingan hasil fungsi rekursi dan iterasi dalam satu berkas. |
| `PerpangkatanIteratifRekursif.cpp` | Komparasi perhitungan eksponensial (pangkat) antara perulangan dan pemanggilan rekursif. |
| `UjiKomparasi.cpp` | Program benchmarking waktu eksekusi faktorial rekursif vs iteratif. |

### 4. Struktur Data Array & Matriks
| Berkas | Deskripsi & Konsep |
| :--- | :--- |
| `Array2DPAA.cpp` | Manipulasi array 2 dimensi untuk pengolahan matriks data nilai mahasiswa. |
| `LinearSortingArray1D.cpp` | Algoritma pengurutan nilai linier pada array 1 dimensi. |
| `PencariNilaiTerbesar.cpp` | Algoritma pemindaian linier (*linear scan*) untuk menemukan elemen maksimum. |

### 5. Percabangan & Logika Dasar PAA
| Berkas | Deskripsi & Konsep |
| :--- | :--- |
| `Pertemuan-2-PAA.cpp` | Praktikum pertemuan ke-2 analisis struktur dasar dan operasi logika algoritma. |
| `ProgramPercabanganPAA.cpp` | Implementasi logika seleksi kondisi terstruktur. |
| `ProgramKakeanIfElse.cpp` | Analisis percabangan majemuk dan *decision tree* kondisi banyak. |
| `ProgramGanjilGenap.cpp` | Deteksi paritas bilangan ganjil/genap. |
| `PenentuGanjilGenap.cpp` | Variasi penentuan bilangan ganjil atau genap. |

---

## 🛠️ Panduan Menjalankan Program

### Prasyarat
- Kompiler C++: **GCC/G++** (disarankan MinGW-w64 / MSYS2 UCRT64).
- Target Standar: **C++17** (`-std=c++17`).

### 1. Menggunakan VS Code (Rekomendasi)
1. Buka folder `PAA-perancangan-analisis-algoritma` di VS Code:
   ```bash
   code "D:\MY CODE\VS CODE\PAA-perancangan-analisis-algoritma"
   ```
2. Buka salah satu file `.cpp` yang ingin dijalankan (misal: `Soal3_Fibonacci.cpp`).
3. Tekan **`Ctrl + Shift + B`** untuk melakukan kompilasi otomatis. File executable `.exe` akan langsung disimpan ke dalam folder `output/`.
4. Untuk melakukan debug dengan GDB, tekan tombol **`F5`** (sudah disetel membuka *external console* agar `cin` tidak freeze).

### 2. Menggunakan Terminal / PowerShell
Jalankan kompilasi manual menggunakan perintah `g++`:

```powershell
# Contoh kompilasi Soal UTS:
g++ Soal3_Fibonacci.cpp -o output/Soal3_Fibonacci.exe -std=c++17

# Menjalankan program hasil kompilasi:
.\output\Soal3_Fibonacci.exe
```

---

## 📄 Lisensi & Kontributor
- **Pengembang:** Achmad Rizqi Mubarok ([@MasRizqi07](https://github.com/MasRizqi07))
- **Mata Kuliah:** Perancangan & Analisis Algoritma (PAA) Semester 3
