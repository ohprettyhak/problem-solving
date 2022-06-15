#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

  int n, row, col;
  cin >> n;
  row = n / 2;
  col = n - row;
  cout << (row + 1) * (col + 1) << "\n";

  return 0;
}