#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int ary[10] = {0, };
    string number;
    cin >> number;

    for (int i = 0; i < number.length(); i++) ary[number[i] - '0'] += 1;

    ary[9] = (int) ceil((ary[9] + ary[6]) / 2.0);
    ary[6] = 0;

    int rst = 0;
    for (int i = 0; i < 10; i++) rst = max(rst, ary[i]);
    cout << rst << '\n';
    
    return 0;
}