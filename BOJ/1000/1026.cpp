#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = 0; i < n; i++) scanf("%d", &b[i]);
    
    sort(a.begin(), a.end(), greater<int>());
    sort(b.begin(), b.end(), less<int>());
    
    int sum = 0;
    for (int i = 0; i < n; i++) sum += a[i] * b[i];
    printf("%d\n", sum);
    
    return 0;
}