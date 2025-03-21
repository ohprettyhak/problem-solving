#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO;

    int numbers[1000000], n;
    
    cin >> n;    
    for (int i = 0; i < n; i++) cin >> numbers[i];
    sort(numbers, numbers + n, less<>());

    for (int i = 0; i < n; i++) cout << numbers[i] << '\n';
    
    return 0;
}