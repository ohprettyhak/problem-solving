#include <iostream>
#include <string> 

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;

    n = n / 4;
    string rst = "";
    while (n--) rst += "long ";
    rst+= "int";
    
    cout << rst << '\n';
    
    return 0;
}