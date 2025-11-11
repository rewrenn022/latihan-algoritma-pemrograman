#include <iostream>
using namespace std;

int main() {
    int size;
    int arr[100];
    int *pStart, *pEnd;

    cin >> size;

    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    pStart = arr;           
    pEnd = arr + size - 1;  

    while (pStart < pEnd) {
        int temp = *pStart;
        *pStart = *pEnd;
        *pEnd = temp;
        pStart++;
        pEnd--;
    }

    
    for (int i = 0; i < size; i++) {
        cout << arr[i];
        if (i < size - 1) cout << " ";
    }

    cout << endl;
    return 0;
}
