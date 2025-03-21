#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        string word;
        cin >> word;
        cout << word[0] << word[word.length() - 1] << '\n';
    }
    
    return 0;
}