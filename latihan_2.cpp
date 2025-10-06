/*
Nama         : Renata Pratiwi
NPM          : 140810250010
Kelas        : B
Waktu Pengerjaan : 7 Menit
*/


#include <iostream>
using namespace std;

 int main(){
    int N;
    cin >> N;
    
    int digit = to_string(abs(N)).length();

    if (digit==4){
        cout << "Ya" << endl;
    } else {
        cout << "Tidak" << endl; 
    }
 }