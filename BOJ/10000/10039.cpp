#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int score[5] = {0, };
    int total = 0;
    int avg = 0;

    for (int i = 0; i < 5; i++) {
        cin >> score[i];
        if (score[i] < 40) score[i] = 40;
        total += score[i];
    }
    
    avg = total / 5;
    cout << avg << "\n";
    
    return 0;
}