#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    scanf("%d", &n);
	
    vector<int> loops(n);
    for (int i = 0; i < n; i++) scanf("%d", &loops[i]);
    sort(loops.begin(), loops.end(), greater<int>());
	
    int result = 0;
    for (int i = 0; i < n; i++) result = max(result, loops[i] * (i + 1));
    printf("%d\n", result);
    
    return 0;
}