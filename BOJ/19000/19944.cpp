#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, m;
    cin >> n >> m;
    if (m <= 2) cout << "NEWBIE!" << '\n';
    else if (n < m) cout << "TLE!" << '\n';
    else cout << "OLDBIE!" << '\n';
    
    return 0;
}