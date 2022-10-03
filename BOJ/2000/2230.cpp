#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO;

    int numbers[100000];
    int n, m;
    
    cin >> n >> m;
    for (int i = 0; i < n; i++) cin >> numbers[i];
    sort(numbers, numbers + n);

    int start = 0, end = 0, rst = INT_MAX;
    while (start < n && end < n) {
        int dist = numbers[end] - numbers[start];
        if (dist < m) end++;
        else if (dist > m) {
            rst = min(rst, dist);
            start++;
        } else {
            rst = dist;
            break;
        }
    }

    cout << rst << '\n';
    
    return 0;
}