#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    long long ac1, ac2, chi;
    cin >> ac1 >> ac2 >> chi;

    long long chi2 = chi + chi;
    long long acs = ac1 + ac2;
    if (acs >= chi2) cout << acs - chi2 << '\n';
    else cout << acs << '\n';

    return 0;
}