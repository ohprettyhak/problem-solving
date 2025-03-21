#include <iostream>
#include <algorithm>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO;

    int ary[1000000];
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) cin >> ary[i];
    sort(ary, ary + n, greater<int>());

    for (int i = 0; i < n; i++) cout << ary[i] << '\n';
    
    return 0;
}