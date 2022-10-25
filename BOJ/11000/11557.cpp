#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO;

    int t;
    cin >> t;

    while (t--) {
        pair<int, string> school[100];
        int n;
        
        cin >> n;
        for (int i = 0; i < n; i++) cin >> school[i].second >> school[i].first;
        sort(school, school + n, greater<>());
        
        cout << school[0].second << '\n';
    }
    
    return 0;
}