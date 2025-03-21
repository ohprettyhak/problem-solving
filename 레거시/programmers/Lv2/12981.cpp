#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer(2);
    vector<string> used;

    char last = words[0][words[0].length() - 1];
    used.push_back(words[0]);

    for (int i = 1; i < words.size(); i++) {
        auto it = find(used.begin(), used.end(), words[i]);
        if (words[i][0] != last || it != used.end()) {
            answer[0] = i % n + 1;
            answer[1] = i / n + 1;
            break;
        }

        used.push_back(words[i]);
        last = words[i][words[i].length() - 1];
    }
    return answer;
}