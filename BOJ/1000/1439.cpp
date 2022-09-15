#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    string word;
    cin >> word;

    int one = 0, zero = 0;
    for (int i = 0; i < word.length(); i++) {
        if (word[i] != word[i + 1]) {
            if (word[i] == '0') zero++;
            else one++;
        }
    }
    cout << min(zero, one) << '\n';
    
    return 0;
}