#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO;
    
    int a, b;
    cin >> a >> b;

    cout << min(a / 2, b) << '\n';
    
    return 0;
}