#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int sum = 0;
    for (int i = 0; i < 5; i++) {
        int temp;
        scanf("%d", &temp);
        sum += temp;
    }
    printf("%d\n", sum);
    
    return 0;
}