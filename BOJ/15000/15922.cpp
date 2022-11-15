#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long

using namespace std;

int main() {
    FASTIO;
    
    pair<int, int> line[100000];
    int n;

    cin >> n;
    for (int i = 0; i < n; i++) cin >> line[i].first >> line[i].second;

    long long rst = 0;
    int start = line[0].first, end = line[0].second;
    
    for (int i = 1; i < n; i++) {
        if (line[i].first <= end) {
            if (line[i].second > end) end = line[i].second;
        } else if (line[i].first > end) {
            rst += abs(end - start);
            start = line[i].first;
            end = line[i].second;
        }
    }
    rst += abs(end - start);

    cout << rst << '\n';
    
    return 0;
}