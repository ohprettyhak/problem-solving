#include <iostream>
#include <queue>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    priority_queue<int, vector<int>, less<int>> pos;
    priority_queue<int, vector<int>, greater<int>> neg;
    priority_queue<int> zero;
    int n;
    
    cin >> n;

    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        
        if (temp > 0) pos.push(temp);
        else if (temp < 0) neg.push(temp);
        else zero.push(temp);
    }

    int rst = 0;
    
    // positive sum
    while (pos.size() > 1) {
        long long a = pos.top();
        pos.pop();
        long long b = pos.top();
        pos.pop();

        if (a != 1 && b != 1) rst += a * b;
        else rst += a + b;
    }

    while (pos.size() != 0) {
        rst += pos.top();
        pos.pop();
    }

    // negative sum
    while (neg.size() > 1) {
        long long a = neg.top();
        neg.pop();
        long long b = neg.top();
        neg.pop();
        rst += a * b;
    }

    if (zero.size() == 0 && neg.size() == 1) rst += neg.top();
    cout << rst << '\n';
    
    return 0;
}