#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long

using namespace std;

bool compare(const pair<ll, ll>& a, const pair<ll, ll>& b) {
    return a.second < b.second;
}

int main() {
    FASTIO;

    int n;
    pair<ll, ll> x[100000], xs[100000];
    cin >> n;

    ll sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> x[i].first >> x[i].second;
        sum += x[i].second;
    }
    sort(x, x + n);

    xs[0] = x[0];
    for (int i = 1; i < n; i++) xs[i] = { x[i].first, x[i].second + xs[i - 1].second };

    sum = ceil(sum / 2.0);
    cout << x[lower_bound(xs, xs + n, pair<ll, ll>(0, sum), compare) - xs].first << '\n';
    
    return 0;
}