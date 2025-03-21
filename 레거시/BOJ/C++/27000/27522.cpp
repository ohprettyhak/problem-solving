#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main(int argc, char **argv) {
    FASTIO;

    pair<string, string> record[8];
    for (int i = 0; i < 8; i++) cin >> record[i].first >> record[i].second;
    sort(record, record + 8, less());

    int score[] = {10, 8, 6, 5, 4, 3, 2, 1};
    int red = 0, blue = 0;
    for (int i = 0; i < 8; i++) {
        if (record[i].second == "B") blue += score[i];
        else red += score[i];
    }

    cout << (red > blue ? "Red" : "Blue") << '\n';

    return 0;
}