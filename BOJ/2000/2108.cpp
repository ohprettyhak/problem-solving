#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n, small = 4001, large = -4001, sum = 0, modeList[8002] = {0, };
    scanf("%d", &n);
    vector<int> vec;

    for (int i = 0; i < n; i++) {
        int temp;
        scanf("%d", &temp);

        vec.push_back(temp);
        small = min(small, temp);
        large = max(large, temp);
        sum += temp;
        modeList[temp + 4000] += 1;
    }

    sort(vec.begin(), vec.end());

    int mode = *max_element(modeList, modeList + 8001);
    int count = 0;
    int rep;

    for (int i = 0; i < 8001; i++) {
        if (count == 2) break;
        if (modeList[i] == mode) {
            count++;
            rep = i - 4000;
        }
    }

    cout << int(round((double) sum / n)) << endl;
    cout << vec[(n / 2)] << endl;
    cout << rep << endl;
    cout << large - small << endl;

    return 0;
} 