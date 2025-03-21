#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO;

    string s, k;
    cin >> s >> k;

    string temp = "";
    for (int i = 0; i < s.size(); i++) if (!('0' <= s[i] && '9' >= s[i])) temp += s[i];

    if (temp.find(k) != string::npos) cout << 1 << '\n';
    else cout << 0 << '\n';
    
    return 0;
}