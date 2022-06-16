#include <iostream>
#include <vector>

using namespace std; 

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int S, T, D;
    cin >> S >> T >> D;

    int F = (D / (S * 2)) * T;
    cout << F << "\n";

    return 0;
}