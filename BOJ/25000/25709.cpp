#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO;
    
    string n;
    cin >> n;

    int rst = 0;
    while (true) {
        bool removed = false;
        for (int i = 0; i < n.size(); i++) {
            if (n[i] == '1') {
                n.erase(i, 1);        
                removed = true;
                break;
            }
        }

        rst++;
        int temp = -1;
        if (n != "") temp = stoi(n);
        if (!removed) temp--;
        n = to_string(temp);
        
        if (temp <= 0) break;
    }

    cout << rst << '\n';
    
    return 0;
}