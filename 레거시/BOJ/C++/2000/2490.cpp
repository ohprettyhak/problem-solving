#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    for (int i = 0; i < 3; i++) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        
        int sum = a + b + c + d;
        switch (sum) {
            case 0: 
                cout << "D" << '\n';
                break;
            case 1: 
                cout << "C" << '\n';
                break;
            case 2: 
                cout << "B" << '\n';
                break;
            case 3: 
                cout << "A" << '\n';
                break;
            case 4: 
                cout << "E" << '\n';
                break;
            default: 
                return -1;
        }
    }
    
    return 0;
}