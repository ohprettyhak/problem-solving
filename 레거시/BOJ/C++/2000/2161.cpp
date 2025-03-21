#include <iostream>
#include <queue>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    queue<int> card;
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) card.push(i);
    
    while (card.size() != 1) {
        cout << card.front() << " ";
        card.pop();
        card.push(card.front());
        card.pop();
    }

    cout << card.front() << '\n';
    
    return 0;
}