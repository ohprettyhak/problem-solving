#include <iostream>

using namespace std;
typedef long long ll;

ll find(ll x) {
    ll mod = x % 4;
    switch (mod) {
        case 0: return x;
        case 1: return 1;
        case 2: return x + 1;
        case 3: return 0;
    }
    return 0;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        ll s, f;
        cin >> s >> f;
    
        cout << (find(f) ^ find(s - 1)) << '\n';
    }
    return 0;
}