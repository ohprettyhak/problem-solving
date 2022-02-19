#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
        
    int n, m;
    scanf("%d %d", &n, &m);
    vector<int> a(n);
    vector<int> b(m);
    
    for (int i = 0; i < n; i++) scanf("%d", &a[i]);
    for (int i = 0; i < m; i++) scanf("%d", &b[i]);
    
    a.insert(a.end(), b.begin(), b.end());
    sort(a.begin(), a.end());
    
    for (int i = 0; i < a.size(); i++) printf("%d ", a[i]);
    
    return 0;
}