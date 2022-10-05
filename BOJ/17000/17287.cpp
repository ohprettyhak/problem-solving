#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO;

    string word;
    cin >> word;

    int rst = 0;
    for (int i = 0, sum = 0; i < word.length(); i++) {
        if (word[i] == '[') sum += 3;
        if (word[i] == '{') sum += 2;
        if (word[i] == '(') sum += 1;
        if (word[i] == ']') sum -= 3;
        if (word[i] == '}') sum -= 2;
        if (word[i] == ')') sum -= 1;
        if ('0' <= word[i] && word[i] <= '9') rst = max(rst, sum);
    }

    cout << rst << '\n';
    
    return 0;
}