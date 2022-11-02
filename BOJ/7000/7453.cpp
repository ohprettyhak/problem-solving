#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long

using namespace std;

int main() {
    FASTIO;

    ll numbers[4000][4];
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) for (int j = 0; j < 4; j++) cin >> numbers[i][j];

    vector<ll> ab;
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) ab.push_back(numbers[i][0] + numbers[j][1]);
    sort(ab.begin(), ab.end());

    ll rst = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            ll need = -1 * (numbers[i][2] + numbers[j][3]);
            rst += upper_bound(ab.begin(), ab.end(), need) - lower_bound(ab.begin(), ab.end(), need);
        }
    }

    cout << rst << '\n';

    return 0;
}