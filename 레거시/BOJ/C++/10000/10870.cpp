#include <iostream>
#include <cmath>

using namespace std;

const double pi = (1 + sqrt(5)) / 2;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;

    cout << round(pow(pi, n) / sqrt(5)) << '\n';
    
    return 0;
}