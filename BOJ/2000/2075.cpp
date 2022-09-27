#include <iostream>
#include <queue>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO;

    priority_queue<int, vector<int>, greater<int>> numbers;
    int n;
    cin >> n;

    for (int i = 0; i < n * n; i++) {
        int x;
        cin >> x;
        
        if (numbers.size() < n) numbers.push(x);
        else if (numbers.top() < x) numbers.pop(),numbers.push(x);
        else continue;
    }
    
    cout << numbers.top() << '\n';
    
    return 0;
}