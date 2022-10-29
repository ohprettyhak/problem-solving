#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO;

    string word;
    cin >> word;

    transform(word.begin(), word.end(), word.begin(), ::toupper);
    cout << word << '\n';
    
    return 0;
}