#include <iostream>
#include <queue>
#include <limits.h>

using namespace std;

#define MAX 1001

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int r, c;
char maze[MAX][MAX];
int visit[MAX][MAX] = {0, };

int rst = INT_MAX;

queue<pair<int, int>> q;

bool isInside(int nx, int ny) {
    return (0 <= nx && 0 <= ny && nx < r && ny < c);
}

void search() {
    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        if (maze[x][y] == 'J' && (x == 0 || y == 0 || x == r - 1 || y == c - 1)) rst = min(rst, visit[x][y]);

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            
            if (!isInside(nx, ny)) continue;
            if (maze[nx][ny] == '.') {
                if (maze[x][y] == 'J') maze[nx][ny] = 'J';
                else if (maze[x][y] == 'F') maze[nx][ny] = 'F';
                visit[nx][ny] = visit[x][y] + 1;
                q.push(make_pair(nx, ny));
            } else if (maze[x][y] == 'F' && maze[nx][ny] == 'J' && visit[x][y] < visit[nx][ny]) {
                maze[nx][ny] = 'F';
                visit[nx][ny] = visit[x][y] + 1;
                q.push(make_pair(nx, ny));
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    cin >> r >> c;
    pair<int, int> jihun;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) { 
            cin >> maze[i][j];
            if (maze[i][j] == 'J') jihun = make_pair(i, j);
            if (maze[i][j] == 'F') {
                q.push(make_pair(i, j));
                visit[i][j] = 1;    
            }
        }
    }

    q.push(jihun);
    visit[jihun.first][jihun.second] = 1;    
    
    search();

    if (rst == INT_MAX) cout << "IMPOSSIBLE" << "\n";
    else cout << rst << "\n";
    
    return 0;
}