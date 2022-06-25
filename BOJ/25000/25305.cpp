#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int ppl[1001] = {0, };
    int n, k;

    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> ppl[i];
    sort(ppl, ppl + n, greater<>());

    cout << ppl[k - 1] << '\n';
    return 0;
}