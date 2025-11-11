/*
Nama Program : latihan_3.cpp
Nama         : Renata Pratiwi
NPM          : 140810250010
Tanggal Buat : 20 September 2025
Deskripsi    : Diberikan sebuah bilangan bulat positif n, kembalikan nilai true jika n adalah pangkat empat (n=4^x). Jika tidak, kembalikan nilai false. Program wajib menggunakan fungsi!
*/

#include <iostream>
using namespace std;

bool isPowerOfFour(int n){
    if (n <= 0) return false;

    while(n % 4 == 0){
        n /= 4;
    }

    return ( n == 1);
}

int main() {
    int n;
    cin >> n;

    cout << isPowerOfFour(n) << endl;
    return 0;
}
