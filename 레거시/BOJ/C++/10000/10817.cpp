#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int numbers[3] = {0, };

    for (int i = 0; i < 3; i++) cin >> numbers[i];
    sort(numbers, numbers + 3, greater<>());

    cout << numbers[1] << '\n';
    
    return 0;
}