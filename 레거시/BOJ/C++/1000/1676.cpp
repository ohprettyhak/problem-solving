#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int N;
    cin >> N;
  
    int count = 0;
    while (N >= 5) {
        count += N / 5;
        N /= 5;
    }

    cout << count << "\n";
    return 0;
}