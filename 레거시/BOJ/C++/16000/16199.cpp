#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO;

    int y1, m1, d1, y2, m2, d2;
    cin >> y1 >> m1 >> d1 >> y2 >> m2 >> d2;

    int man, se, yeon;

    if (y1 == y2) man = y2 - y1;
    else if (y1 < y2) {
        if (m1 < m2) man = y2 - y1;
        else if (m1 > m2) man = y2 - y1 - 1;
        else if (m1 == m2) {
            if (d2 >= d1) man = y2 - y1;
            else man = y2 - y1 - 1;
        }
    }
    se = y2 - y1 + 1;
    yeon = y2 - y1;

    cout << man << '\n' << se << '\n' << yeon << '\n';
    
    return 0;
}