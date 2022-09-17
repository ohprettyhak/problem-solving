#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int a, b;
        char c;

        cin >> a >> c >> b;
        cout << a + b << '\n';
    }
    
    return 0;
}