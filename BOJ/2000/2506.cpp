#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO;

    int score[100], n;
    cin >> n >> score[0];
    
    int rst = 0, temp = 0;
    if (score[0] == 1) rst += 1;
    for (int i = 1; i < n; i++) {
        cin >> score[i];
        if (score[i] == 1) {
            rst += 1;
            if (score[i - 1]) rst += ++temp;
            else temp = 0;
        }
    }

    cout << rst << '\n';
    
    return 0;
}