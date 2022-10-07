#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO;
    
    string s;
    cin >> s;

    int A = 0, B = 0;
    for (int i = 0; i < s.size(); i += 2) {
        if (s[i] == 'A') A += s[i + 1] - '0';
        else B += s[i + 1] - '0';
    }

    if (A > B) cout << "A" << '\n';
    else cout << "B" << '\n';
    
    return 0;
}