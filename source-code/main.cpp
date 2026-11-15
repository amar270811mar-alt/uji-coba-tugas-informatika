
#include <iostream>
using namespace std;

// ========================================
// TUGAS INFORMATIKA KELAS XII
// IMPLEMENTASI ALGORITMA DALAM C++
// ========================================

// Nama Lengkap : UJI COBA GURU
// Kelas        : XII-7
// Nomor Absen  : 1
// Judul Program: Menghitung Luas Persegi Panjang

int main() {
    // 1. DEKLARASI VARIABEL
    float panjang, lebar, luas;

    // 2. INPUT
    cout << "Masukkan panjang: ";
    cin >> panjang;

    cout << "Masukkan lebar: ";
    cin >> lebar;

    // 3. PROSES
    luas = panjang * lebar;

    // 4. OUTPUT
    cout << "Luas persegi panjang = " << luas << endl;

    return 0;
}
