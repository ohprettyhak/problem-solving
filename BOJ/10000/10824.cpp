#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO;

    string a, b, c, d;
    cin >> a >> b >> c >> d;

    a += b;
    c += d;

    cout << stoll(a) + stoll(c) << '\n';
    
    return 0;
}