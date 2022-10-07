#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO;

    string s;
    int m;
    cin >> s >> m;
    
    list<char> editor(s.begin(), s.end());

    auto pointer = editor.end();
    while (m--) {
        char command;
        cin >> command;
        
        if (command == 'L') if (pointer != editor.begin()) pointer--;
        if (command == 'D') if (pointer != editor.end()) pointer++;
        if (command == 'B') if (pointer != editor.begin()) pointer = editor.erase(--pointer);
        if (command == 'P') {
            cin >> command;
            editor.insert(pointer, command);
        }
    }

    for (auto iter = editor.begin(); iter != editor.end(); iter++) cout << *iter;
    
    return 0;
}