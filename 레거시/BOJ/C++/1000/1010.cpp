#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        long long rst = 1;
        if (n > (m / 2)) n = (m - n);
        for (int i = 0; i < n; i++) rst *= m - i;
        for (int i = 0; i < n; i++) rst /= i + 1;
        
        cout << rst << "\n";
    }
    
    return 0; 
}