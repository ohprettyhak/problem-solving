#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int x, y;
        cin >> x >> y;
        cout << x + y << '\n';
    }
    
    return 0;
}