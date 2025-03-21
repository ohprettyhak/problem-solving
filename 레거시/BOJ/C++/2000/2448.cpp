#include <iostream>

using namespace std;

void star(int n, int x, int y);

char arr[3072][6143];

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) for (int j = 0; j < 2 * n - 1; j++) arr[i][j] = ' ';

    star(n, n - 1, 0);
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2 * n - 1; j++) cout << arr[i][j];
        cout << '\n';
    }
    
    return 0;
}

void star(int n, int x, int y) {
    if (n == 3) {
        arr[y][x] = '*';
        
        arr[y + 1][x - 1] = '*';
        arr[y + 1][x + 1] = '*';
        
        for(int i = 0; i < 5; i++) arr[y + 2][x - 2 + i] = '*';
        return;
    }
    
    star(n / 2, x, y);
    star(n / 2, x - (n / 2), y + (n / 2));
    star(n / 2, x + (n / 2), y + (n / 2));
}