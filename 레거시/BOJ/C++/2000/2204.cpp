#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

char asciitolower(char x) {
    if (x <= 'Z' && x >= 'A') return x - ('Z' - 'z');
    return x;
}

int main() {
    FASTIO;

    int n;
    while (cin >> n) {
        if (n == 0) break;
        pair<string, string> words[1000];
        for (int i = 0; i < n; i++) {
            cin >> words[i].first;
            words[i].second = words[i].first;
            transform(words[i].first.begin(), words[i].first.end(), words[i].first.begin(), asciitolower);
        }
        sort(words, words + n);

        cout << words[0].second << '\n';
    }
    
    return 0;
}