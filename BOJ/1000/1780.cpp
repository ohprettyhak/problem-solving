#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> paper;
int mCount = 0, zCount = 0, pCount = 0;

bool check(int row, int col, int num) {
    int temp = paper[row][col];
        for (int i = row; i < row + num; i++) {
            for (int j = col; j < col + num; j++) {
                if (temp != paper[i][j])
               return false;
            }
        }
    return true;
}

void solution(int row, int col, int num) {
    if (check(row, col, num)) {
        if (paper[row][col] == -1) mCount++;
        if (paper[row][col] == 0) zCount++;
        if (paper[row][col] == 1) pCount++;
    } else {
        int size = num / 3;
        for (int i = 0; i < 3; i++) 
            for (int j = 0; j < 3; j++) solution(row + size * i, col + size * j, size);
    }
}

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int N;
    cin >> N;
    paper.resize(N, vector<int>(N));

    for (int i = 0; i < N; i++) for (int j = 0; j < N; j++) cin >> paper[i][j];

    solution(0, 0, N);

    cout << mCount << "\n";
    cout << zCount << "\n";
    cout << pCount << "\n";

    return 0;
}