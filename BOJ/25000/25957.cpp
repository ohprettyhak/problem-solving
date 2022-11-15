#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

string solution(string word, char c1, char c2) {
    string temp = "";
    temp += word;
    temp.append(1, c1);
    temp.append(1, c2);
    return temp;
}

int main() {
    FASTIO;

    int n, m;
    string word;
    map<string, string> words;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> word;
        string temp = word;
        sort(temp.begin(), temp.end());
        temp = solution(temp, word[0], word[word.size() - 1]);
        words[temp] = word;
    }
    
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> word;
        string temp = word;
        sort(temp.begin(), temp.end());
        temp =  solution(temp, word[0], word[word.size() - 1]);
        cout << words[temp] << ' ';
    }
    
    return 0;
}