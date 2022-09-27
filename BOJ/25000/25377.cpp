#include <iostream>
#include <climits>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO;

    int n, rst = INT_MAX;
    cin >> n;

    while (n--) {
        int a, b;
        cin >> a >> b;
        if (a <= b) rst = min(rst, b);
    }

    if (rst == INT_MAX) cout << -1 << '\n';
    else cout << rst << '\n';
    
    return 0;
}