#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

double rate(double v, double a) {
    return 1 - (1 - v) * (1 - a);
}

int main() {
    FASTIO;
    
    double medi[40000];
    int n; 
    
    cin >> n;
    cout.precision(7);
    for (int i = 0; i < n; i++) {
        cin >> medi[i];
        medi[i] /= 100;
    }

    double rst = 0;
    for (int i = 0; i < n; i++) {
        rst = rate(rst, medi[i]);
        printf("%.6lf\n", rst * 100);
    }
    
    return 0;
}