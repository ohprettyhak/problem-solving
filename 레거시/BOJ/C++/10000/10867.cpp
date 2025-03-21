#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
        
    int n;
    scanf("%d", &n);
    vector<int> ary(n);
	
    for (int i = 0; i < n; i++) scanf("%d", &ary[i]);
    sort(ary.begin(), ary.end());
    ary.erase(unique(ary.begin(), ary.end()), ary.end());
    
    for (int i = 0; i < ary.size(); i++) printf("%d ", ary[i]);
    
    return 0;
}