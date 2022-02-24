#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int r1, s;
    scanf("%d %d", &r1, &s);
    printf("%d\n", 2 * s - r1);
    
    return 0;
}