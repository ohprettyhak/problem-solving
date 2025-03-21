#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO

    vector<string> books;
    int n;
    cin >> n;

    books.resize(n);
    for (int i = 0; i < n; i++) cin >> books[i];
    sort(books.begin(), books.end());

    int range = 1, rstRange = 1;
    string prev = "", rst = books[0];
    for (int i = 0; i < n; i++) {
        if (prev == books[i]) {
            range++;
            if (rstRange <= range) {
                rst = books[i];
                rstRange = range;
            }
        } else range = 1;
        prev = books[i];
    }

    cout << rst << " " << rstRange << '\n';
    
    return 0;
}