#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int month, day;
    cin >> month >> day;

    if (month == 2){
        if (day == 18) cout << "Special" << '\n';
        else if(day > 18) cout << "After" << '\n';
        else cout << "Before" << '\n';
    } else if (month > 2) cout << "After" << '\n';
    else cout << "Before" << '\n';
    
    return 0;
}