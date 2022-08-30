#include <bits/stdc++.h>

using namespace std;

bool compare(string i, string j) {
    if (i[1] == j[1]) return i[0] < j[0];
    return i[1] < j[1];
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int T;
    cin >> T;
    
    while (T--) {
        string list[4];
        for (int i = 0; i < 4; i++) cin >> list[i];
        sort(list, list + 4, compare);
        
        int on = int(list[0][0]);
        char oa = list[0][1];
        int tn = int(list[1][0]);
        char ta = list[1][1];
        int thn = int(list[2][0]);
        char tha = list[2][1];
        int fn = int(list[3][0]);
        char fa = list[3][1];
        
        // #1, #2
        if (oa == ta && ta == tha) {
            if (on + 1 == tn && tn + 1 == thn) {
                cout << ":)" << '\n';
                continue;
            }
            if (on == tn && tn == thn) {
                cout << ":)" << '\n';
                continue;
            }
        }
        if (ta == tha && tha == fa) {
            if (tn + 1 == thn && thn + 1 == fn) {
                cout << ":)" << '\n';
                continue;
            }
            if (tn == thn && thn == fn) {
                cout << ":)" << '\n';
                continue;
            }
        }

        // #1 issue
        if (oa == ta && ta == fa) {
            if (on + 1 == tn && tn + 1 == fn) {
                cout << ":)" << '\n';
                continue;
            }
        }
        if (oa == tha && tha == fa) {
            if (on + 1 == thn && thn + 1 == fn) {
                cout << ":)" << '\n';
                continue;
            }
        }
        
        // #3
        if (oa == ta && tha == fa) {
            if (on == tn && thn == fn) {
                cout << ":)" << '\n';
                continue;
            }
        }
    
        cout << ":(" << '\n';
    }
    return 0;
}