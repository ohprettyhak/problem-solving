#include <iostream>
#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n; 

    priority_queue<long long, vector<long long>, greater<long long>> value;
   
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        value.push(temp);
    }
        
    long long sum = 0;
    while (!value.empty()) {
        if (value.size() > 1) {
            long long x = value.top();
            value.pop();
            long long y = value.top();
            value.pop();
            sum += x + y;
            value.push(x + y);
        } else break;
    }

    cout << sum << "\n";
    
    return 0;
}