#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >> t;

    cout << "Gnomes:" << '\n';
    while (t--) {
        int numbers[3];
        for (int i = 0; i < 3; i++) cin >> numbers[i];

        if ((numbers[1] - numbers[0]) * (numbers[2] - numbers[1]) > 0) cout << "Ordered" << '\n';
        else cout << "Unordered" << '\n';
    }
    
    return 0;
}