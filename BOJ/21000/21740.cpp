#include <iostream>
#include <algorithm>
#include <string>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

bool compare(string a, string b) {
    return a + b > b + a;
}

string bigCompare(string a, string b) {
    if (a.length() == b.length()) {
        if (stoi(a) < stoi(b)) return b;
        return a;
    }
    if (a.length() > b.length()) return a;
    return b;
}

string reverse69(string x) {
    string rst = "";
    for (int i = 0; i < x.length(); i++) {
        if (x[i] == '6') rst = '9' + rst;
        else if (x[i] == '9') rst = '6' + rst;
        else rst = x[i] + rst;
    }
    return rst;
}

int main() {
    FASTIO;

    string a[100001];
    string big = "0";
    int n;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        a[i] = reverse69(a[i]);
        big = bigCompare(big, a[i]);
    }
    a[n] = big;
    
    sort(a, a + n + 1, compare);
    for (int i = n; i >= 0; i--) cout << reverse69(a[i]);
    
    return 0;
}