#include <iostream>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO;

    int n;
    cin >> n;
    
    long long sum = 0, h = 0;
    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        sum += x;
        h = max(h, x);
    }

    if (n == 1 && sum == 1) {
        cout << "Happy" << '\n';
        return 0;
    }
    
    if (sum / 2 >= h) cout << "Happy" << '\n';
    else cout << "Unhappy" << '\n';
    
    return 0;
}