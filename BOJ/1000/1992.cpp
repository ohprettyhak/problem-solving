#include <iostream>
#include <string>

using namespace std;

const int MAX = 64;
int n;
int arr[MAX][MAX];

void find(int x, int y, int size) {
    if (size == 1) {
        cout << arr[x][y];
        return;
    }

    bool zero = true, one = true;
    for (int i = x; i < x + size; i++) {
        for (int j = y; j < y + size; j++) {
            if (arr[i][j]) zero = false;
            else one = false;
        }
    }
    
    if (zero) cout << 0;
    else if (one) cout << 1;
    else {
        cout << "(";
        find(x, y, size / 2);
        find(x, y + size / 2, size / 2);
        find(x + size / 2, y, size / 2);
        find(x + size / 2, y + size / 2, size / 2);
        cout << ")";
    }    
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> n;
    
    for (int i = 0; i < n; i++) {
        string temp;
        cin >> temp;
        for (int j = 0; j < n; j++) arr[i][j] = temp[j] - '0';
    }

    find (0, 0, n);
    
    return 0;
}