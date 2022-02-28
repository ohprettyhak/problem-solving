#include <iostream>
#include <vector>
#include <queue>
#include <string>

using namespace std;

int n;
vector<vector<int>> game;
vector<vector<bool>> visit;

string search() {
    queue<pair<int, int>> q;
    q.push(make_pair(0, 0));
    
    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        
        int step = game[x][y];
        if (step == -1) return "HaruHaru";
        
        if (x + step < n && !visit[x + step][y]) {
            q.push(make_pair(x + step, y));
            visit[x + step][y] = true;
        }
        
        if (y + step < n && !visit[x][y + step]) {
            q.push(make_pair(x, y + step));
            visit[x][y + step] = true;
        }
    }
    return "Hing";
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> n;
    game.resize(n, vector<int>(n));
    visit.resize(n, vector<bool>(n, false));
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) cin >> game[i][j];
    
    cout << search() << "\n";
    
    return 0;
}