#include <iostream>
#include <queue>
#include <limits.h>

using namespace std;

#define MAX 1001

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int r, c;
char forest[MAX][MAX];
int visit[MAX][MAX] = {0, };

queue<pair<int, int>> hedgehog;
queue<pair<int, int>> water;

int rst = INT_MAX;

bool isInside(int nx, int ny) {
    return (0 <= nx && 0 <= ny && nx < r && ny < c);
}

void search() {
    while (!hedgehog.empty()) {
        while (!water.empty()) {
            int x = water.front().first;
            int y = water.front().second;
            water.pop();

            for (int i = 0; i < 4; i++) {
                int nx = x + dx[i];
                int ny = y + dy[i];

                if (!isInside(nx, ny)) continue;
                if (forest[nx][ny] == '.') {
                    forest[nx][ny] = '*';
                    visit[nx][ny] = visit[x][y] + 1;
                    water.push(make_pair(nx, ny));
                }
            }
        }

        while (!hedgehog.empty()) {
            int x = hedgehog.front().first;
            int y = hedgehog.front().second;
            hedgehog.pop();

            for (int i = 0; i < 4; i++) {
                int nx = x + dx[i];
                int ny = y + dy[i];

                if (!isInside(nx, ny)) continue;
                if (forest[nx][ny] == '.') {
                    forest[nx][ny] = '@';
                    visit[nx][ny] = visit[x][y] + 1;
                    hedgehog.push(make_pair(nx, ny));
                } else if (forest[nx][ny] == '*' && visit[nx][ny] > visit[x][y] + 1) {
                    forest[nx][ny] = '@';
                    visit[nx][ny] = visit[x][y] + 1;
                    hedgehog.push(make_pair(nx, ny));
                } else if (forest[nx][ny] == 'D') rst = min(rst, visit[x][y]);
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> r >> c;
    
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) { 
            cin >> forest[i][j];
            if (forest[i][j] == 'S') {
                hedgehog.push(make_pair(i, j));
                visit[i][j] = 1;
            }
            if (forest[i][j] == '*') {
                water.push(make_pair(i, j));
                visit[i][j] = 1;    
            }
        }
    }
    
    search();
    
    if (rst == INT_MAX) cout << "KAKTUS" << "\n";
    else cout << rst << "\n";
    return 0;
}