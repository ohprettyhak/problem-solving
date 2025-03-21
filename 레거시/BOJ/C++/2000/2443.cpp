#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        for (int j = 1; j <= i; j++) cout << " ";
        for (int j = 1; j <= 2 * (n - i) - 1; j++) cout << "*";
        cout << '\n';
    }
    
    return 0;
}