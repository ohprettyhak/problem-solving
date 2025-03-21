#include <iostream>
#include <algorithm>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO

    int water[1000];
    int n, l;
    cin >> n >> l;
    for (int i = 0; i < n; i++) cin >> water[i];
    
    sort(water, water + n);
    
    int i = 0, rst = 0;
    while (i < n) {
        int idx = i;
        int orig = water[i];
        
        while (idx < n) {
            idx++;
            if (water[idx] - orig < l) continue;
            else break;
        }
        i = idx;
        rst++;
    }

    cout << rst << '\n';
    
    return 0;
}