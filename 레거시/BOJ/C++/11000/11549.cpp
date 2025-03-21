#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, tmp, rst = 0;
    cin >> n;
    
    for (int i = 0; i < 5; i++) {
        cin >> tmp;
        if (n == tmp) rst += 1;
    }
    cout << rst << '\n';
    
    return 0;
}