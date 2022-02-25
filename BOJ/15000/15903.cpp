#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<long long> card(n);
    for (int i = 0; i < n; i++) cin >> card[i];

    while (m--) {
        sort(card.begin(), card.end());
        long long temp = card[0] + card[1];
        card[0] = temp;
        card[1] = temp;
    }

    long long sum = 0;
    for (int i = 0; i < n; i++) sum += card[i];
    cout << sum << "\n";
    
    return 0;
}