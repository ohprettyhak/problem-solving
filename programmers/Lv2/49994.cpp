#include <string>
#include <set>

using namespace std;

struct Node {
    int x, y;
};

bool operator<(const Node &left, const Node &right) {
    if (left.x != right.x) return left.x < right.x;
    return left.y < right.y;
}

int solution(string dirs) {
    set<pair<Node, Node>> visited;

    Node current = {0, 0};
    for (char dir: dirs) {
        Node move = {current.x, current.y};
        if (dir == 'U') move.y += 1;
        if (dir == 'D') move.y -= 1;
        if (dir == 'L') move.x -= 1;
        if (dir == 'R') move.x += 1;

        if (move.x < -5 || move.x > 5 || move.y < -5 || move.y > 5) continue;
        visited.insert(make_pair(current, move));
        visited.insert(make_pair(move, current));
        current = move;
    }

    return visited.size() / 2;
}