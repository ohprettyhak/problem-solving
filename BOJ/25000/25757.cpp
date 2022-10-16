#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

double rate(double v, double a) {
    return 1 - (1 - v) * (1 - a);
}

int main() {
    FASTIO;

    set<string> ppl;
    int n;
    char c;
    
    cin >> n >> c;
    while (n--) {
        string s;
        cin >> s;
        ppl.insert(s);
    }

    int rst = 0;
    while (!ppl.empty()) {
        if (c == 'Y') {
            ppl.erase(ppl.begin());
            rst++;
        }
        if (c == 'F') {
            ppl.erase(ppl.begin());
            ppl.erase(ppl.begin());
            rst++;
            if (ppl.size() < 2) break;
        }
        if (c == 'O') {
            ppl.erase(ppl.begin());
            ppl.erase(ppl.begin());
            ppl.erase(ppl.begin());
            rst++;
            if (ppl.size() < 3) break;
        }
    }
    cout << rst << '\n';
    
    return 0;
}