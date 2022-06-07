#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int X;
    cin >> X;

    vector<int> vec(X + 1, 0);

    for (int i = 2; i <= X; i++) {
        int temp = INT_MAX;
        if (i % 3 == 0) temp = min(temp, vec[i / 3]);
        if (i % 2 == 0) temp = min(temp, vec[i / 2]);
        temp = min(temp, vec[i - 1]);

        vec[i] = temp + 1;
    }
    
    cout << vec[X] << "\n";
    return 0;
}