#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    string word;
    cin >> word;
    
    for (int i = 0; i < word.length(); i++) {
        char c = word[i];
        if ('a' <= c && c <= 'z') word[i] = word[i] - 32;
        else word[i] = word[i] + 32;
    }
    cout << word << '\n';
    
    return 0;
}