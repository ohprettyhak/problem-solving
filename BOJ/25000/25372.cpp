#include <iostream>
#include <string> 

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;

    while (n--) {
        string word;
        cin >> word;

        if (6 <= word.size() && word.size() <= 9) cout << "yes" << '\n';
        else cout << "no" << '\n';
    }
    
    return 0;
}