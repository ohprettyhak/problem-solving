#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int list[26] = {0, };
    string word;
    cin >> word;

    for (int i = 0; i < word.size(); i++) list[word[i] - 97]++;
    for (int i = 0; i < 26; i++) cout << list[i] << " ";
    
    return 0;
}