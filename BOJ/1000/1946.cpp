#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int n;
        scanf("%d", &n);
        vector<pair<int, int>> people(n);
        for (int i = 0; i < n; i++) scanf("%d %d", &people[i].first, &people[i].second);
        sort(people.begin(), people.end());
        
        int result = 1;
        int value = people[0].second;
        for (int i = 0; i < n; i++) {
            if (people[i].second < value) {
                result++;
                value = people[i].second;
            }
        }
        printf("%d\n", result);
    }
    
    return 0;
}