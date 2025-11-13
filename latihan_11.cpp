#include <iostream>
using namespace std;

int main() {
    char text1[100];
    char text2[100];
    char *p1, *p2;

    
    cin.getline(text1, 100);

    p1 = text1;
    p2 = text2;

   
    while (*p1 != '\0') {
        *p2 = *p1;
        p1++;
        p2++;
    }
    *p2 = '\0';     

    cout << text2 << endl;

    return 0;
}
