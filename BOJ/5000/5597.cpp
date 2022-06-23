#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int students[31] = {0, };

    for (int i = 0; i < 28; i++) {
        int t;
        cin >> t;
        students[t] = 1;
    }

    for (int i = 1; i < 31; i++) 
        if (students[i] != 1) cout << i << '\n';
    
    return 0;
}