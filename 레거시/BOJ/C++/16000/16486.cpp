#include <iostream>

#define PI 3.141592

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    double d1, d2;
    cin >> d1 >> d2;
    
    printf("%.6f\n", d1 * 2 + 2 * PI * d2);
}