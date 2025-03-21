#include <iostream>
#include <algorithm>

using namespace std;

int sum = 0, man[9];

void search() {
    for (int i = 0; i < 8; i++) {
        for (int j = 1; j < 9; j++) {
            int temp = sum - man[i] - man[j];
            if (temp == 100) {
                man[i] = -1;
                man[j] = -1;
                return;
            }
        }
    }
}

int main() {
    for (int i = 0; i < 9; i++) {
        scanf("%d\n", &man[i]);
        sum += man[i];
    }
    
    search();
    sort(man, man + 9);
    
    for (int i = 0; i < 9; i++) if (man[i] != -1) printf("%d\n", man[i]);
    return 0;
}