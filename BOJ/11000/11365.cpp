#include <iostream>
#include <cstring>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    while (1) {
        char word[501];
        cin.getline(word, 501);

        if (word[0] == 'E' && word[1] == 'N' && word[2] == 'D') break;
        for (int i = strlen(word) - 1; i >= 0; i--) cout << word[i];
        cout << '\n';
    }
    
    return 0;
}