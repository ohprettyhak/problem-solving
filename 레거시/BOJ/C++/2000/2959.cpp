#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> step(4);
    for (int i = 0; i < 4; i++) scanf("%d", &step[i]);
    sort(step.begin(), step.end());
    printf("%d\n", step[0] * step[2]);    
    
    return 0;
}