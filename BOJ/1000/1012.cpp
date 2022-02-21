#include <iostream>
#include <memory.h>

using namespace std;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int t, m, n, k;
int farm[50][50] = {0, };
bool visit[50][50] = {false, };

bool isInside(int nx, int ny) {
    return (0 <= nx && 0 <= ny && nx < m && ny < n);
}

void search(int x, int y) {
    visit[x][y] = true;

    for (int i = 0; i < 4; i++) {
      int nx = x + dx[i];
      int ny = y + dy[i];
      
      if (isInside(nx, ny) && !visit[nx][ny] && farm[nx][ny] == farm[x][y]) search(nx, ny);
    }
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    scanf("%d", &t);

    while (t--) {
        scanf("%d %d %d", &m, &n, &k);

        memset(farm, 0, sizeof(farm));
        memset(visit, false, sizeof(visit));

        while (k--) {
            int x, y;
            scanf("%d %d", &x, &y);
            farm[x][y] = 1;
        }

        int cnt = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (!visit[i][j] && farm[i][j]) {
                    search(i, j);
                    cnt += 1;
                }
            }
        }
        printf("%d\n", cnt);
    }

    return 0;
}