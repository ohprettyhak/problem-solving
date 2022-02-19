#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
        
    string word;
    cin >> word;
    
    vector<string> words;
    for (int i = 0; i < word.length(); i++) words.emplace_back(word.substr(i, word.length()));
    sort(words.begin(), words.end());
    
    for (int i = 0; i < words.size(); i++) cout << words[i] << "\n";
    
    return 0;
}