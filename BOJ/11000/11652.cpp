#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO

    vector<long long> numbers;
    int n;
    cin >> n;

    numbers.resize(n);
    for (int i = 0; i < n; i++) cin >> numbers[i];
    sort(numbers.begin(), numbers.end());

    long long prev = LONG_MAX, range = 1, rstRange = 1, rst = numbers[0];
    for (int i = 0; i < n; i++) {
        if (prev == numbers[i]) {
            range++;
            if (rstRange < range) {
                rst = numbers[i];
                rstRange = range;
            }
        } else range = 1;
        prev = numbers[i];
    }

    cout << rst << '\n';
    
    return 0;
}