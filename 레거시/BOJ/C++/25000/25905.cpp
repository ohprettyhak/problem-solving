#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO;

    double pi[10];
    for (int i = 0; i < 10; i++) cin >> pi[i];
    sort(pi, pi + 10, greater<>());

    double rst = 1;
    for (int i = 1; i < 10; i++) rst = rst * (pi[i - 1] / i);

    printf("%.6f", rst * pow(10, 9));
    
    return 0;
}