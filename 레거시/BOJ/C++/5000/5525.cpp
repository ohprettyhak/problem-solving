#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n, m;
    cin >> n >> m;

    string s;
    cin >> s;
    
    int rst = 0;
    for (int i = 1; i < m; i++) {
        int count = 0;
        
        if (s[i] == 'O') continue;

        while (s[i + 1] == 'O' && s[i + 2] == 'I') {
            count += 1;
            if (count == n) {
                count -= 1;
                rst += 1;
            }
            i += 2;
        }
    }
    cout << rst << '\n';
    
    return 0;
}