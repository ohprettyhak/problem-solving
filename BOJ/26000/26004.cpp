#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO;

    int hiarc[5] = {0, }, n;
    string word;
    
    cin >> n >> word;

    for (int i = 0; i < n; i++) {
        if (word[i] == 'H') hiarc[0] += 1;
        if (word[i] == 'I') hiarc[1] += 1;
        if (word[i] == 'A') hiarc[2] += 1;
        if (word[i] == 'R') hiarc[3] += 1;
        if (word[i] == 'C') hiarc[4] += 1;
    }

    int rst = INT_MAX;
    for (int i = 0; i < 5; i++) rst = min(rst, hiarc[i]);
    
    cout << rst << '\n';
    
    return 0;
}