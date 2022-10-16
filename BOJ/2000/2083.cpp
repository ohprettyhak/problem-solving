#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO;

    string name;
    int age, weight;

    while (true) {
        cin >> name >> age >> weight;
        if (name == "#" && age == 0 && weight == 0) break;

        if (age > 17 || weight >= 80) cout << name << " Senior" << '\n';
        else cout << name << " Junior" << '\n';
    }
    
    return 0;
}