#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<pair<int, int>> score(8);
    for (int i = 0; i < 8; i++) {
        scanf("%d", &score[i].first);
        score[i].second = i + 1;
    }
    sort(score.begin(), score.end(), greater<pair<int, int>>());
    
    int sum = 0;
    vector<int> result;
    for (int i = 0; i < 5; i++) {
        sum += score[i].first;
        result.emplace_back(score[i].second);
    }
    sort(result.begin(), result.end());
    
    printf("%d\n", sum);
    for (int i = 0; i < 5; i++) printf("%d ", result[i]);
    
    return 0;
}