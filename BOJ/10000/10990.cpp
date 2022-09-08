#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) cout << " ";
        cout << "*";
        for (int j = 0; j < (i * 2) - 1; j++) cout << " ";
        if (i != 0) cout << "*";
        cout << '\n';
    }
    
    return 0;
}