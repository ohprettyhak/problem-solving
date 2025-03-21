#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int m;
    cin >> m;
    
    long long sum = 0, vxor = 0;
    while (m--) {
        int query, value;
        cin >> query;
        
        if (query == 1) {
            cin >> value;
            sum += value;
            vxor ^= value;
        } else if (query == 2) {
            cin >> value;
            sum -= value;
            vxor ^= value;
        } else if (query == 3) cout << sum << "\n";
        else if (query == 4) cout << vxor << "\n";
    }
    
    return 0; 
}