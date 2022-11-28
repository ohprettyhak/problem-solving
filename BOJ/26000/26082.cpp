#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO;

    int a, b, c;
    cin >> a >> b >> c;

    int c1 = b / a;
    int c2 = c1 * 3;

    cout << c2 * c << '\n';
    
    return 0;
}