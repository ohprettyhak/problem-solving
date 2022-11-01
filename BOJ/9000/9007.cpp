#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO;

    int t;
    cin >> t;

    while (t--) {
        int student[4][1000], k, n;
        cin >> k >> n;
        for (int i = 0; i < 4; i++) for (int j = 0; j < n; j++) cin >> student[i][j];

        vector<int> temp;
        for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) temp.push_back(student[2][i] + student[3][j]);
        sort(temp.begin(), temp.end());
        
        int rst = INT_MAX;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                int left = student[0][i] + student[1][j];
                int idx = lower_bound(temp.begin(), temp.end(), k - left) - temp.begin();
                int get = temp[idx], sum = left + get;

                if (abs(k - sum) < abs(k - rst)) rst = sum;
                else if (abs(k - sum) == abs(k - rst)) if (k - sum > 0 && k - rst < 0) rst = sum;

                if (idx != 0) {
                    get = temp[--idx], sum = left + get;
                    if (abs(k - sum) < abs(k - rst)) rst = sum;
                    else if (abs(k - sum) == abs(k - rst)) if (k - sum > 0 && k - rst < 0) rst = sum;
                }
            }
        }
        
        cout << rst << '\n';
    }
    
    return 0;
}