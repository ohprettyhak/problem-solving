#include <bits/stdc++.h>

using namespace std;

int main() { 
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    queue<pair<int, int>> queue;
    int map[101][101] = {0, };
    
    int N, M, Ac, D, Sr, Sc;
    cin >> N >> M >> Ac >> D >> Sr >> Sc;
    queue.push(make_pair(0, Ac - 1));
    
    while (!queue.empty()) {
        int x = queue.front().first;
        int y = queue.front().second;
        queue.pop();

        map[x][y] = 1;

        if (x == N - 1 && y == M - 1) break;

        if (D == 0) {
            if (y == 0) {
                queue.push(make_pair(x + 1, y));
                D = 1;
            } else {
                queue.push(make_pair(x, y - 1));
            }         
        } else {
            if (y == M - 1) {
                queue.push(make_pair(x + 1, y));
                D = 0;
            } else {
                queue.push(make_pair(x, y + 1));
            }
        } 
    }

    if (map[Sr - 1][Sc - 1] == 1) cout << "NO..." << '\n';
    else cout << "YES!" << '\n';
}