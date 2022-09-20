#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    stack<char> bf;
    int t;
    
    cin >> t;
    cin.ignore();

    while (t--) {
        string sentence;
        getline(cin, sentence);
        sentence += ' ';

        for (int i = 0; i < sentence.size(); i++) {
            if (sentence[i] == ' ') {
                while (!bf.empty()) {
                    cout << bf.top();
                    bf.pop();
                }
                cout << ' ';
            } else bf.push(sentence[i]);
        }
        cout << '\n';
    }
    
    return 0;
}