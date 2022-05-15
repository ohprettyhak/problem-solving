#include <bits/stdc++.h>

using namespace std;

int main() { 
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int ari[10] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};

    int S, M;
    cin >> S >> M;
    
    for (int i = 9; i >= 0; i--) if (S >= ari[i]) S -= ari[i];
    
    if (S == 0) {
        cout << "No thanks" << '\n';
    } else {
        vector<int> coogi;
        for (int i = 9; i >= 0; i--) {
            if (M >= ari[i]) {
                coogi.emplace_back(ari[i]);
                M -= ari[i];
            }
        }
    
        for (int i = 0; i < coogi.size(); i++) if (S >= coogi[i]) S -= coogi[i];
        
        if (S == 0) cout << "Thanks" << '\n';
        else cout << "Impossible" << '\n';
    }
    
    return 0;
}