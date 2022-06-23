#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;

    long long sum = 0;
    for (int i = 1; i * i <= N; i++) {
        if (N % i == 0) {
            if (i == N / i) sum += i;
            else sum += (i + N / i);
        }
    }

    cout << sum * 5 - 24 << endl;

    return 0;
} 