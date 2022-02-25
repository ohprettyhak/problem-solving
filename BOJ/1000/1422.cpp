#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool sortByWord(string x, string y) {
    string xy = x + y;
    string yx = y + x;
    if (xy > yx) return true;
    return false;
}

bool sortByLength(string x, string y) {
    if (x.length() == y.length()) {
        string xy = x + y;
        string yx = y + x;
        if (xy > yx) return true;
        else return false;
    } else return x.length() > y.length();
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int k, n;
    cin >> k >> n;
    
    vector<string> numbers(k);
    vector<string> length(k);
    for (int i = 0; i < k; i++) {
        cin >> numbers[i];
        length[i] = numbers[i];
    }
    sort(numbers.begin(), numbers.end(), sortByWord);
    sort(length.begin(), length.end(), sortByLength);

    vector<string> result;
    for (int i = 0; i < k; i++) result.emplace_back(numbers[i]);
    for (int i = 0; i < n - k; i++) result.emplace_back(length[0]);
    sort(result.begin(), result.end(), sortByWord);

    for (int i = 0; i < result.size(); i++) cout << result[i];
    
    return 0;
}