#include <iostream>
#include <queue>
#include <tuple>

using namespace std;

#define MAX 1001

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int n, m;
int town[MAX][MAX];
int visit[MAX][MAX] = {0, };

bool isInside(int nx, int ny) {
    return (0 <= nx && 0 <= ny && nx < n && ny < m);
}

void search(pair<int, int> o, pair<int, int> t) {
    queue<tuple<int, int, int>> q;
    q.push(make_tuple(o.first, o.second, 1));
    q.push(make_tuple(t.first, t.second, 1));
    
    visit[o.first][o.second] = 1;
    visit[t.first][t.second] = 1;
    
    while (!q.empty()) {
        int x = get<0>(q.front());
        int y = get<1>(q.front());
        int value = get<2>(q.front());
        q.pop();

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            
            if (!isInside(nx, ny)) continue;
            if (town[nx][ny] == 0) {
                if (town[x][y] == 1) town[nx][ny] = 1;
                else if (town[x][y] == 2) town[nx][ny] = 2;
                visit[nx][ny] = value + 1;
                q.push(make_tuple(nx, ny, value + 1));
            } else if (town[x][y] == 1 && town[nx][ny] == 2 && visit[nx][ny] == value + 1) town[nx][ny] = 3;
            else if (town[x][y] == 2 && town[nx][ny] == 1 && visit[nx][ny] == value + 1) town[nx][ny] = 3;
        }
    }
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    scanf("%d %d", &n, &m);
    pair<int, int> o, t;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) { 
            scanf("%d", &town[i][j]);
            if (town[i][j] == 1) o = make_pair(i, j);
            if (town[i][j] == 2) t = make_pair(i, j);
        }
    }
    
    search(o, t);

    int one= 0, two = 0, three = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) { 
            if (town[i][j] == 1) one++;
            if (town[i][j] == 2) two++;
            if (town[i][j] == 3) three++;
        }
    }
    
    printf("%d %d %d\n", one, two, three);    
    return 0;
}