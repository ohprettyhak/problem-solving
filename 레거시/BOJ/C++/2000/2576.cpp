#include <iostream>
#include <climits>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int sum = 0;
    int rst = INT_MAX;
    for (int i = 0; i < 7; i++) {
        int n;
        cin >> n;

        if (n % 2 == 1) {
            sum += n;
            rst = min(rst, n);
        }
    }

    if (rst == INT_MAX) cout << -1 << '\n';
    else cout << sum << '\n' << rst << '\n';
    
    return 0;
}