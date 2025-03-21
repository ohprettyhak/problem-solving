#include <iostream>
#include <vector>
#include <algorithm>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO

    vector<int> numbers;
    int n, x;
    
    cin >> n;
    numbers.resize(n);
    for (int i = 0; i < n; i++) cin >> numbers[i];
    cin >> x;
    
    sort(numbers.begin(), numbers.end());
    
    int start = 0, end = numbers.size() - 1, rst = 0;
    while (start != end) {
        int sum = numbers[start] + numbers[end];
        if (sum == x) { 
            rst++;
            start++;
        } else if (sum > x) end--;
        else start++;
    }

    cout << rst << '\n';
    
    return 0;
}