#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

bool compare(const pair<int, string>& a, const pair<int, string>& b) {
    return a.second < b.second;
}

int main() {
    FASTIO;

    int m, n;
    string words[10] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
    
    cin >> m >> n;
    vector<pair<int, string>> numbers;

    for (int i = m; i <= n; i++) {
        string word;
        if (i >= 10) word = words[i / 10] + ' ' + words[i % 10];
        else word = words[i];
        numbers.push_back({ i, word });
    }
    sort(numbers.begin(), numbers.end(), compare);
    
    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i].first << ' ';
        if ((i + 1) % 10 == 0) cout << '\n';
    }
    
    return 0;
}