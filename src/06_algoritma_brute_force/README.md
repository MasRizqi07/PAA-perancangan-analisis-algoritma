# Pertemuan 9 — Algoritma Brute Force

Materi `PAA 9_bruteforce.pptx` membahas pendekatan penyelesaian masalah secara langsung (*straightforward* / *naive*) beserta **11 studi kasus algoritma** lengkap dengan analisis kompleksitas waktu $T(n)$ dan kompleksitas ruang $S(n)$.

---

## 📊 Ringkasan Perbandingan Kompleksitas

| No | Studi Kasus / Algoritma | Nama File C++ | Kompleksitas Waktu $T(n)$ | Kompleksitas Ruang $S(n)$ |
| :---: | :--- | :--- | :---: | :---: |
| 1 | Elemen Terbesar & Terkecil (Max/Min) | `01_MaxMinBruteForce.cpp` | $\mathcal{O}(n)$ | $\mathcal{O}(n)$ |
| 2 | Pencarian Beruntun (*Sequential Search*) | `02_SequentialSearch.cpp` | $\mathcal{O}(n)$ | $\mathcal{O}(n)$ |
| 3 | Menghitung Perpangkatan ($a^n$) | `03_PerpangkatanBruteForce.cpp` | $\mathcal{O}(n)$ | $\mathcal{O}(1)$ |
| 4 | Menghitung Faktorial ($n!$) | `04_FaktorialBruteForce.cpp` | $\mathcal{O}(n)$ | $\mathcal{O}(1)$ |
| 5 | Perkalian Dua Matriks ($C = A \times B$) | `05_PerkalianMatriks.cpp` | $\mathcal{O}(n^3)$ | $\mathcal{O}(n^2)$ |
| 6 | Uji Bilangan Prima (*Primality Test*) | `06_TesBilanganPrima.cpp` | $\mathcal{O}(\sqrt{n})$ | $\mathcal{O}(1)$ |
| 7 | Pengurutan Brute Force (*Exchange Sort*) | `07_SortingBruteForce.cpp` | $\mathcal{O}(n^2)$ | $\mathcal{O}(n)$ |
| 8 | Evaluasi Polinom $p(x)$ | `08_EvaluasiPolinom.cpp` | $\mathcal{O}(n)$ | $\mathcal{O}(n)$ |
| 9 | Pencocokan String (*String Matching*) | `09_StringMatching.cpp` | $\mathcal{O}(n \cdot m)$ | $\mathcal{O}(n + m)$ |
| 10 | Pasangan Titik Terdekat (*Closest Pair*) | `10_ClosestPairPoints.cpp` | $\mathcal{O}(n^2)$ | $\mathcal{O}(n)$ |
| 11 | Penyelesaian Sudoku $9 \times 9$ | `11_SudokuSolver.cpp` | $\mathcal{O}(9^k)$ | $\mathcal{O}(1)$ |

---

## 🛠️ Perintah Compile & Run (PowerShell)

Pastikan direktori tujuan `output/06_algoritma_brute_force` sudah dibuat sebelum kompilasi agar folder `src/` tetap bersih dari file `.exe`:

```powershell
New-Item -ItemType Directory -Force -Path "output/06_algoritma_brute_force" | Out-Null
```

### Compile Masing-masing File

1. **Elemen Terbesar & Terkecil (Max/Min)**
   ```powershell
   g++ -std=c++17 -Wall -Wextra src/06_algoritma_brute_force/01_MaxMinBruteForce.cpp -o output/06_algoritma_brute_force/01_MaxMinBruteForce.exe
   .\output\06_algoritma_brute_force\01_MaxMinBruteForce.exe
   ```

2. **Pencarian Beruntun (*Sequential Search*)**
   ```powershell
   g++ -std=c++17 -Wall -Wextra src/06_algoritma_brute_force/02_SequentialSearch.cpp -o output/06_algoritma_brute_force/02_SequentialSearch.exe
   .\output\06_algoritma_brute_force\02_SequentialSearch.exe
   ```

3. **Menghitung Perpangkatan ($a^n$)**
   ```powershell
   g++ -std=c++17 -Wall -Wextra src/06_algoritma_brute_force/03_PerpangkatanBruteForce.cpp -o output/06_algoritma_brute_force/03_PerpangkatanBruteForce.exe
   .\output\06_algoritma_brute_force\03_PerpangkatanBruteForce.exe
   ```

4. **Menghitung Faktorial ($n!$)**
   ```powershell
   g++ -std=c++17 -Wall -Wextra src/06_algoritma_brute_force/04_FaktorialBruteForce.cpp -o output/06_algoritma_brute_force/04_FaktorialBruteForce.exe
   .\output\06_algoritma_brute_force\04_FaktorialBruteForce.exe
   ```

5. **Perkalian Dua Matriks ($C = A \times B$)**
   ```powershell
   g++ -std=c++17 -Wall -Wextra src/06_algoritma_brute_force/05_PerkalianMatriks.cpp -o output/06_algoritma_brute_force/05_PerkalianMatriks.exe
   .\output\06_algoritma_brute_force\05_PerkalianMatriks.exe
   ```

6. **Uji Bilangan Prima (*Primality Test*)**
   ```powershell
   g++ -std=c++17 -Wall -Wextra src/06_algoritma_brute_force/06_TesBilanganPrima.cpp -o output/06_algoritma_brute_force/06_TesBilanganPrima.exe
   .\output\06_algoritma_brute_force\06_TesBilanganPrima.exe
   ```

7. **Pengurutan Brute Force (*Exchange Sort*)**
   ```powershell
   g++ -std=c++17 -Wall -Wextra src/06_algoritma_brute_force/07_SortingBruteForce.cpp -o output/06_algoritma_brute_force/07_SortingBruteForce.exe
   .\output\06_algoritma_brute_force\07_SortingBruteForce.exe
   ```

8. **Evaluasi Polinom $p(x)$**
   ```powershell
   g++ -std=c++17 -Wall -Wextra src/06_algoritma_brute_force/08_EvaluasiPolinom.cpp -o output/06_algoritma_brute_force/08_EvaluasiPolinom.exe
   .\output\06_algoritma_brute_force\08_EvaluasiPolinom.exe
   ```

9. **Pencocokan String (*String Matching*)**
   ```powershell
   g++ -std=c++17 -Wall -Wextra src/06_algoritma_brute_force/09_StringMatching.cpp -o output/06_algoritma_brute_force/09_StringMatching.exe
   .\output\06_algoritma_brute_force\09_StringMatching.exe
   ```

10. **Pasangan Titik Terdekat (*Closest Pair*)**
    ```powershell
    g++ -std=c++17 -Wall -Wextra src/06_algoritma_brute_force/10_ClosestPairPoints.cpp -o output/06_algoritma_brute_force/10_ClosestPairPoints.exe
    .\output\06_algoritma_brute_force\10_ClosestPairPoints.exe
    ```

11. **Penyelesaian Sudoku $9 \times 9$**
    ```powershell
    g++ -std=c++17 -Wall -Wextra src/06_algoritma_brute_force/11_SudokuSolver.cpp -o output/06_algoritma_brute_force/11_SudokuSolver.exe
    .\output\06_algoritma_brute_force\11_SudokuSolver.exe
    ```

### Compile Seluruh File Sekaligus

```powershell
New-Item -ItemType Directory -Force -Path "output/06_algoritma_brute_force" | Out-Null
Get-ChildItem "src/06_algoritma_brute_force/*.cpp" | ForEach-Object {
    g++ -std=c++17 -Wall -Wextra $_.FullName -o "output/06_algoritma_brute_force/$($_.BaseName).exe"
}
```
