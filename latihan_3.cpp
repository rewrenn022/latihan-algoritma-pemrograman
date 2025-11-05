/*
Nama : Renata Pratiwi
NPM : 140810250010
Kelas : B
Merge Sort Descending
*/

#include <iostream>
using namespace std;


void merge(int arr[], int kiri, int tengah, int kanan) {
    int n1 = tengah - kiri + 1; 
    int n2 = kanan - tengah;    

    int L[n1], R[n2]; 

    
    for (int i = 0; i < n1; i++)
        L[i] = arr[kiri + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[tengah + 1 + j];

    int i = 0, j = 0, k = kiri;

    
    while (i < n1 && j < n2) {
        if (L[i] >= R[j])        
            arr[k++] = L[i++];
        else
            arr[k++] = R[j++];
    }

    
    while (i < n1)
        arr[k++] = L[i++];
    while (j < n2)
        arr[k++] = R[j++];
}

void mergeSort(int arr[], int kiri, int kanan) {
    if (kiri < kanan) {
        int tengah = (kiri + kanan) / 2;

        
        mergeSort(arr, kiri, tengah);
        mergeSort(arr, tengah + 1, kanan);

       
        merge(arr, kiri, tengah, kanan);
    }
}


void tampil(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int n;
    cout << "Masukkan jumlah data: ";
    cin >> n;

    int data[n];
    cout << "Masukkan elemen-elemen data:\n";
    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << i + 1 << ": ";
        cin >> data[i];
    }

    cout << "\nData sebelum diurutkan: ";
    tampil(data, n);

    mergeSort(data, 0, n - 1);

    cout << "Data sesudah diurutkan: ";
    tampil(data, n);

    return 0;
}
