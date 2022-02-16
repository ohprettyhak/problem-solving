#include <iostream>
#include <queue>

using namespace std;

struct cmp {
    // second asc, first asc
    bool operator()(pair<int, int>&x, pair<int, int>&y) {
        if (x.second == y.second) return x.first > y.first;
        else return x.second > y.second;
    }
};

int main() {
    int n;
    scanf("%d", &n);
    
    priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> rooms;
    
    for (int i = 0; i < n; i++) {
        int x, y;
        scanf("%d %d", &x, &y);
        rooms.push({x, y});
    }
    
    int cnt = 0, endTime = 0;
    while (!rooms.empty()) {
        if (endTime <= rooms.top().first) {
            endTime = rooms.top().second;
            cnt += 1;
        }
        rooms.pop();
    }
    
    printf("%d\n", cnt);
    return 0;
}