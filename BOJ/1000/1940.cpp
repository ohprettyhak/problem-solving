#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int N, M;
    cin >> N >> M;

    vector<int> element(N);
    for(int i = 0; i < N; i++) cin >> element[i];
  
    int start = 0;
    int end = 1;
    int count = 0;

    while (start < end && end < N) {
        if (element[start] + element[end] == M) count += 1;

        if (end == N - 1) {
            start += 1;
            end = start + 1;
        } else {
            end += 1;
        }
    }

    cout << count << "\n";
    return 0;
}