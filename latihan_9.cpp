#include <iostream>
#include <cmath>   
#include <iomanip> 
using namespace std;

struct Point {
    int x;
    int y;
};

int main() {
    Point a, b;          
    Point *pA, *pB;      

   
    pA = &a;
    pB = &b;

    
    cin >> pA->x >> pA->y;
    cin >> pB->x >> pB->y;

    float jarak = sqrt(pow(pB->x - pA->x, 2) + pow(pB->y - pA->y, 2));

    cout << fixed << setprecision(2) << jarak << endl;

    return 0;
}
