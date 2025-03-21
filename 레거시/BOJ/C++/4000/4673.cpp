#include <iostream>

using namespace std;

int sumDigits(int n) {
    return n + n / 1000 + n % 1000 / 100 + n % 100 / 10 + n % 10;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    bool numbers[10001] = {false, };
    for (int i = 0; i < 10000; i++) {
        int temp = sumDigits(i);
        if (temp < 10000) numbers[temp] = true;
    }

    for (int i = 1; i < 10000; i++) if (!numbers[i]) printf("%d\n", i);
    return 0;
}