#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    char c;
    cin >> c;

    if (c == 'N' || c == 'n') cout << "Naver D2" << '\n';
    else cout << "Naver Whale" << '\n';
    
    return 0; 
}