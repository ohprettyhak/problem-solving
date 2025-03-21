#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO;

    string word;
    cin >> word;

    int size = word.length();
    string rst = word;
    for (int i = 0; i < size - 2; i++) {
        for (int j = i + 1; j < size - 1; j++) {
            string temp = word;

            reverse(temp.begin(), temp.begin() + i + 1);
            reverse(temp.begin() + i + 1, temp.begin() + j + 1);
            reverse(temp.begin() + j + 1, temp.end());

            rst = min(rst, temp);
        }
    }

    cout << rst << '\n';
    
    return 0;
}