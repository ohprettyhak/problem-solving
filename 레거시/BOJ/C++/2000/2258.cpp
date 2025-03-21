#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long

using namespace std;

bool compare(const pair<ll, ll>& a, const pair<ll, ll>&b) {
    if (a.second == b.second) return a.first > b.first;
    return a.second < b.second;
}

int main() {
    FASTIO;

    ll n, m;
    cin >> n >> m;

    pair<ll, ll> meats[100000];
    for (int i = 0; i < n; i++) cin >> meats[i].first >> meats[i].second;
    sort(meats, meats + n, compare);
    
    ll money = meats[0].second, weight = meats[0].first;    
    for (int i = 1; i < n; i++) {
        if (weight >= m) {
            if (meats[i].second != meats[i - 1].second && money > meats[i].second) 
                money = meats[i].second;
        } else {
            if (meats[i].second == meats[i - 1].second) money += meats[i].second;
            else money = meats[i].second;
        }
        weight += meats[i].first;
    }
    
    if (weight < m) cout << -1 << '\n';
    else cout << money << '\n';
    
    return 0;
}