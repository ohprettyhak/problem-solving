#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    string word;
    cin >> word;

    for (int i = 0; i < word.size(); i++) {
        cout << word[i];
        if ((i + 1) % 10 == 0) cout << '\n';
    }
    cout << '\n';
    
    return 0;
}