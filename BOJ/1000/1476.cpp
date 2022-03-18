#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int E, S, M;
    cin >> E >> S >> M;

    int year = 1;
    
    while (1) {
        if ((year - E) % 15 == 0 && (year - S) % 28 == 0 && (year - M) % 19 == 0) break;
        year++;
    }
    
    cout << year << endl;
    return 0;
}