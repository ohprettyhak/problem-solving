#include <iostream>
#include <queue>
#include <limits.h>
#include <memory.h>

using namespace std;

#define MAX 1001

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int w, h;
char building[MAX][MAX];
int visit[MAX][MAX] = {0, };

queue<pair<int, int>> people;
queue<pair<int, int>> fire;

int rst = INT_MAX;

bool isInside(int nx, int ny) {
    return (0 <= nx && 0 <= ny && nx < w && ny < h);
}

void search() {
    while (!people.empty()) {
        while (!fire.empty()) {
            int x = fire.front().first;
            int y = fire.front().second;
            fire.pop();

            for (int i = 0; i < 4; i++) {
                int nx = x + dx[i];
                int ny = y + dy[i];

                if (!isInside(nx, ny)) continue;
                if (building[nx][ny] == '.') {
                    building[nx][ny] = '*';
                    visit[nx][ny] = visit[x][y] + 1;
                    fire.push(make_pair(nx, ny));
                }
            }
        }

        while (!people.empty()) {
            int x = people.front().first;
            int y = people.front().second;
            people.pop();

            if (x == 0 || y == 0 || x == w - 1 || y == h - 1) rst = min(rst, visit[x][y]);

            for (int i = 0; i < 4; i++) {
                int nx = x + dx[i];
                int ny = y + dy[i];

                if (!isInside(nx, ny)) continue;
                if (building[nx][ny] == '.') {
                    building[nx][ny] = '@';
                    visit[nx][ny] = visit[x][y] + 1;
                    people.push(make_pair(nx, ny));
                } else if (building[nx][ny] == '*' && visit[nx][ny] > visit[x][y] + 1) {
                    building[nx][ny] = '@';
                    visit[nx][ny] = visit[x][y] + 1;
                    people.push(make_pair(nx, ny));
                }
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        cin >> h >> w;

        rst = INT_MAX;
        memset(building, 0, sizeof(building));
        memset(visit, 0, sizeof(visit));
        
        for (int i = 0; i < w; i++) {
            for (int j = 0; j < h; j++) { 
                cin >> building[i][j];
                if (building[i][j] == '@') {
                    people.push(make_pair(i, j));
                    visit[i][j] = 1;
                }
                if (building[i][j] == '*') {
                    fire.push(make_pair(i, j));
                    visit[i][j] = 1;    
                }
            }
        }
        
        search();
        
        if (rst == INT_MAX) cout << "IMPOSSIBLE" << "\n";
        else cout << rst << "\n";
    }
    return 0;
}