#include <iostream>
#include <algorithm>
#include <string>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

bool compare(string a, string b) {
    if (a.length() == b.length()) {
        int an = 0, bn = 0;
        for (int i = 0; i < a.length(); i++) if ('0' <= a[i] && a[i] <= '9') an += a[i] - '0';
        for (int i = 0; i < b.length(); i++) if ('0' <= b[i] && b[i] <= '9') bn += b[i] - '0';
        if (an == bn) return a < b;
        return an < bn;
    }
    return a.length() < b.length();
}

int main() {
    FASTIO;

    string words[50];
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) cin >> words[i];
    sort(words, words + n, compare);

    for (int i = 0; i < n; i++) cout << words[i] << '\n';
    
    return 0;
}