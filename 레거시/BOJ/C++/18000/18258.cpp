#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, value;
    cin >> n;

    queue<int> q;
    while (n--) {
        string word;
        cin >> word;
        
        if (word == "push") {
            cin >> value;
            q.push(value);
        } else if (word == "pop") {
            if (q.size() == 0) cout << -1 << "\n";
            else {
                value = q.front();
                q.pop();
                cout << value << "\n";
            }
        } else if (word == "size") cout << q.size() << "\n";
        else if (word == "empty") cout << q.empty() << "\n";
        else if (word == "front") {
            if (q.size() == 0) cout << -1 << "\n";
            else cout << q.front() << "\n";
        } else if (word == "back") {
            if (q.size() == 0) cout << -1 << "\n";
            else cout << q.back() << "\n";
        }
    }
    
    return 0;
}