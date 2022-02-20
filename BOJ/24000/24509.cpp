#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct STUDENT {
    int idx;
    int ko;
    int en;
    int math;
    int sci;
};

bool compareKo(struct STUDENT &x, struct STUDENT &y) {
    if (x.ko == y.ko) return x.idx < y.idx;
    return x.ko > y.ko;
}

bool compareEn(struct STUDENT &x, struct STUDENT &y) {
    if (x.en == y.en) return x.idx < y.idx;
    return x.en > y.en;
}

bool compareMath(struct STUDENT &x, struct STUDENT &y) {
    if (x.math == y.math) return x.idx < y.idx;
    return x.math > y.math;
}

bool compareSci(struct STUDENT &x, struct STUDENT &y) {
    if (x.sci == y.sci) return x.idx < y.idx;
    return x.sci > y.sci;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
        
    int n;
    scanf("%d", &n);
    
    set<int> already;
    vector<struct STUDENT> students(n);
    for (int i = 0; i < n; i++) scanf("%d %d %d %d %d", &students[i].idx, &students[i].ko, &students[i].en, &students[i].math, &students[i].sci);
    
    sort(students.begin(), students.end(), compareKo);
    printf("%d ", students[0].idx);
    students.erase(students.begin());
    
    sort(students.begin(), students.end(), compareEn);
    printf("%d ", students[0].idx);
    students.erase(students.begin());
    
    sort(students.begin(), students.end(), compareMath);
    printf("%d ", students[0].idx);
    students.erase(students.begin());
    
    sort(students.begin(), students.end(), compareSci);
    printf("%d ", students[0].idx);
    
    return 0;
}