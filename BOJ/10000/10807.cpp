#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int number[201] = {0, };
    int t, n, v;
    cin >> t;

    while (t--) {
        cin >> n;
        number[n + 100]++;
    }

    cin >> v;
    cout << number[v + 100] << '\n';
    
    return 0;
}