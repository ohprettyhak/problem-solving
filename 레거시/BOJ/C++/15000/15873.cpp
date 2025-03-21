#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    string n;
    cin >> n;

    int A = stoi(n.length() >= 3 && n[1] == '0' ? n.substr(0, 2) : n.substr(0, 1));
    int B = stoi(A == 10 ? n.substr(2) : n.substr(1));

    cout << A + B << '\n';
    
    return 0;
}