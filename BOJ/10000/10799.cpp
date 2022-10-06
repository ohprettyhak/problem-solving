#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO;

    string func;
    cin >> func;

    stack<char> s;
    int rst = 0;
    for (int i = 0; i < func.size(); i++) {
        if (func[i] == '(') s.push('(');
        if (func[i] == ')') {
            s.pop();
            if (func[i - 1] == '(') rst += s.size();
            else rst += 1;
        }
    }

    cout << rst << '\n';
    
    return 0;
}