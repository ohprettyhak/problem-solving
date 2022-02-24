#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, m;
    scanf("%d %d", &n, &m);
    printf("%d\n", n * (m - 1) + 1);
    
    return 0;
}