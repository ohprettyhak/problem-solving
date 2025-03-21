#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct STUDENT {
    string name;
    int ko, en, math;
};

bool cmp(STUDENT x, STUDENT y) {
    if (x.ko == y.ko && x.en == y.en && x.math == y.math) return x.name < y.name;
    if (x.ko == y.ko && x.en == y.en) return x.math > y.math;
    if (x.ko == y.ko) return x.en < y.en;
    return x.ko > y.ko;
}

int main() {
    int n;
    cin >> n;
    
    vector<STUDENT> students(n);
    for (int i = 0; i < n; i++) cin >> students[i].name >> students[i].ko >> students[i].en >> students[i].math;
    sort(students.begin(), students.end(), cmp);
    
    for (int i = 0; i < n; i++) cout << students[i].name << "\n";
    return 0;
}