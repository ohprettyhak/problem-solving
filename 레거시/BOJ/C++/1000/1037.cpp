#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;
    
    vector<int> div(n);
    for (int i = 0; i < n; i++) cin >> div[i];
    sort(div.begin(), div.end());

    cout << div[0] * div[n - 1] << "\n";
    
    return 0;
}