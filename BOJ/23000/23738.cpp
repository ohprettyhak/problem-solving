#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

string russian2eng(char c) {
    if (c == 'B') return "v";
    if (c == 'E') return "ye";
    if (c == 'H') return "n";
    if (c == 'P') return "r";
    if (c == 'C') return "s";
    if (c == 'Y') return "u";
    if (c == 'X') return "h";
    c = tolower(c);
    string temp = "";
    temp.append(1, c);
    return temp;
}

int main() {
    FASTIO;

    string word;
    cin >> word;

    string rst = "";
    for (int i = 0; i < word.size(); i++) rst += russian2eng(word[i]);
    cout << rst << '\n';
    
    return 0;
}