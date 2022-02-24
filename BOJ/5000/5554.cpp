#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int sum = a + b + c + d;
    
    printf("%d\n", sum / 60);
    printf("%d\n", sum % 60);
    
    return 0;
}