#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    
    vector<int> numbers(n);
    for (int i = 0; i < n; i++) scanf("%d", &numbers[i]);
    sort(numbers.begin(), numbers.end());
    
    printf("%d\n", numbers[k - 1]);
    return 0;
}