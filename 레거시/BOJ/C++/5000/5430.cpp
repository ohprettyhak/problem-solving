#include <iostream>
#include <string>
#include <deque>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        string function;
        deque<int> numbers;
        char c;
        bool reverse = false, error = false;

        cin >> function >> n;
        cin >> c;  // [
        for (int i = 0; i < n; i++) {
            int number;
            cin >> number;
            if (i != n - 1) cin >> c;
            numbers.push_back(number);
        }
        cin >> c;  // ]
    
        for (int i = 0; i < function.size(); i++) {
            if (function[i] == 'R') reverse = !reverse;
            else {
                if (numbers.empty()) {
                    cout << "error" << '\n';
                    error = true;
                    break;
                }
                if (reverse) numbers.pop_back();
                else numbers.pop_front();
            }
        }

        if (!error) cout << '[';
        if (reverse) {
            while (!numbers.empty()) {
                cout << numbers.back();
                numbers.pop_back();
                if (!numbers.empty()) cout << ',';
            }
        } else {
            while (!numbers.empty()) {
                cout << numbers.front();
                numbers.pop_front();
                if (!numbers.empty()) cout << ',';
            }
        }
        if (!error) cout << ']' << '\n';
    }
    
    return 0;
}