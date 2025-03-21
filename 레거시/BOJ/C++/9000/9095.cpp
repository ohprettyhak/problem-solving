#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int T;
    cin >> T;
  
    vector<int> dp(12, 0);
    dp[1] = 1;  // 1
    dp[2] = 2;  // 1+1, 2
    dp[3] = 4;  // 1+1+1+1, 1+1+2, 1+3, 2+2

    // dp[n] = dp[n - 1] + dp[n - 2] + dp[n - 3]

    for (int i = 4; i < 12; i++)
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];

    for (int i = 0; i < T; i++) {
        int temp;
        cin >> temp;
        cout << dp[temp] << "\n";
    }

    return 0;
}