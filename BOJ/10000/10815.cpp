#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    
    scanf("%d", &n);
    vector<int> have(n);
    for (int i = 0; i < n; i++) scanf("%d", &have[i]);
    sort(have.begin(), have.end());
    
    scanf("%d", &m);
    vector<int> card(m, 0);
    for (int i = 0; i < m; i++) {
        int temp;
        scanf("%d", &temp);
        if (binary_search(have.begin(), have.end(), temp)) card[i] = 1;
    }
    
    for (int i = 0; i < m; i++) printf("%d ", card[i]);    
    return 0;
}