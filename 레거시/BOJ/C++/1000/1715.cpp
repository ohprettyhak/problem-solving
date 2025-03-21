#include <iostream>
#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n; 

    priority_queue<int, vector<int>, greater<int>> value;
   
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        value.push(temp);
    }
        
    int sum = 0;
    while (!value.empty()) {
        if (value.size() > 1) {
            int x = value.top();
            value.pop();
            int y = value.top();
            value.pop();
            sum += x + y;
            value.push(x + y);
        } else break;
    }

    cout << sum << "\n";
    
    return 0;
}