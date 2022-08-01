#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t;
    int n = 0;
    string word;

    cin >> t;
    cin.ignore();
    
    while (t--) {
        getline(cin, word);
        n++;
        cout << n << ". " << word << '\n';
    }
    
    return 0;
}