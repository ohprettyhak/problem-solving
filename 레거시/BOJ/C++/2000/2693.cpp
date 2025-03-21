#include <iostream>
#include <vector>
#include <algorithm>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO

    vector<int> a(10);
    int t;
    cin >> t;

    while (t--) {
        for (int i = 0; i < 10; i++) cin >> a[i];
        sort(a.begin(), a.end(), greater<int>());
        cout << a[2] << '\n';
    }
    
    return 0;
}