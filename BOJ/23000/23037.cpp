#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    string word;
    cin >> word;

    int rst = 0;
    for (int i = 0; i < 5; i++) rst += pow(word[i] - '0', 5);
    cout << rst << '\n';
    
    return 0;
}