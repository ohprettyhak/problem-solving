#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    char n;
    cin >> n;

    int count = 0;
    for (int i = 0; i < 5; i++) {
        string temp;
        cin >> temp;
        if (n == temp[temp.size() - 1]) count++;
    }

    cout << count << "\n";
    return 0;
}