#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    pair<string, string> word;
    pair<int, int> cnt = make_pair(0, 0);
    
    cin >> word.first >> word.second;

    for (int i = 0; i < word.first.length(); i++) if (word.first[i] == 'a') cnt.first++;
 
    for (int i = 0; i < word.second.length(); i++) if (word.second[i] == 'a') cnt.second++;
    
    if (cnt.first >= cnt.second || word.first.length() == word.second.length()) cout << "go" << '\n';
    else cout << "no" << '\n';
    
    return 0;
}