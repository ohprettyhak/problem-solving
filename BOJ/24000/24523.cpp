#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO;

    int numbers[1000000], n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> numbers[i];

    vector<int> rst(n);
    int output = -1;
    for (int i = n - 1; i > 0; i--) {
        rst[i] = output;
        if (numbers[i - 1] != numbers[i]) output = i + 1;
    }
    rst[0] = output;

    for (int i = 0; i < n; i++) cout << rst[i] << ' ';
    
    return 0;
}