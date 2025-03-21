#include <iostream>
#include <cmath>

using namespace std;

int primeNum[10001];
void primeNumberSieve(int number) {
    for (int i = 2; i <= number; i++) primeNum[i] = i;
    for (int i = 2; i <= sqrt(number); i++) {
        if (primeNum[i] == 0) continue;
        for (int j = i * i; j <= number; j += i) primeNum[j] = 0;
    }
}

int main() {
    int m, n;
    cin >> m >> n;
    primeNumberSieve(10000);

    int sum = 0;
    int min = -1;
    for (int i = m; i <= n; i++) {
        if (primeNum[i] != 0) {
            sum += i;
            if (min == -1) min = i;
        }
    }
    
    if (min == -1) cout << -1 << '\n';
    else cout << sum << '\n' << min << '\n';
}