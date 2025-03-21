#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;
    n %= 8;
    
    cout << (n > 5 || n == 0 ? (10 - n) % 8 : n) << '\n';
    
    return 0;
}