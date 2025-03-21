#include <bits/stdc++.h>

using namespace std;

int main() { 
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int N, A, B;
    cin >> N >> A >> B;

    if ((A / 2 + B) > N) cout << N << '\n';
    else cout << A / 2 + B << '\n';
    
    return 0;
}