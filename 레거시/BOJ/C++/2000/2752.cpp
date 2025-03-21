#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int ary[3];
    for (int i = 0; i < 3; i++) scanf("%d", &ary[i]);
    sort(ary, ary + 3);
    for (int i = 0; i < 3; i++) printf("%d ", ary[i]);
    
    return 0;
}