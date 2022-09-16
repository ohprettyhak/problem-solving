#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n;
    cin >> n;
    
    vector<int> v(n + 1, 0);
    v[1] = 1;
    
    for(int i = 2; i <= n; i++) {
        int value = INT_MAX;
        for(int j = 1; j * j <= i; j++) value = min(value, v[i - j * j]);
        v[i] = value + 1;
    }
    
    cout << v[n] << "\n";
    
    return 0;
}