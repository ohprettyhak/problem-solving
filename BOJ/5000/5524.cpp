#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO;

    int n;
    cin >> n;

    while (n--) {
        string name;
        cin >> name;
        
        for (int i = 0; i < name.size(); i++) name[i] = tolower(name[i]);
        cout << name << '\n';
    }
    
    return 0;
}