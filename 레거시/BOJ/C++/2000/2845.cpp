#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int l, p;
    scanf("%d %d", &l, &p);

    for (int i = 0; i < 5; i++) {
        int news;
        scanf("%d", &news);
        printf("%d ", news - l * p);
    }
    
    return 0;
}