/*
Nama Program : latihan_2.cpp
Nama         : Renata Pratiwi
NPM          : 140810250010
Tanggal Buat : 20 September 2025
Deskripsi    : Kiki adalah seorang siswa yang sedang belajar tentang deret aritmatika. Ia ingin membuat program sigma yang dapat menghitung nilai di mana 
n dan m adalah bilangan bulat positif lalu c adalah bilangan real. Bantulah Kiki untuk membuat program sigma menggunakan fungsi yang menerima tiga parameter, n,m , dan c lalu menampilkan hasilnya.
*/

#include <iostream>
using namespace std;


double pangkat (int a, int b) {
    double hasil = 1;
    for (int i = 0; i < b; i++){
        hasil *= a;
    }
return hasil;
}

double sigma ( int N, int m, double c){
    double total = 0;
    for (int n = 0; n <= N; n++){
        total += pangkat (n, m) + c;
    }
    return total;
}

int main() {
     int N, m;
     double c;
     cin >> N >> m >> c;

     double hasil = sigma (N, m, c);

     cout << hasil << endl;

     return 0;
}
