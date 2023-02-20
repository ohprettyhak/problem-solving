#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main(int argc, char **argv) {
    FASTIO;

    int n, result = 0;
    cin >> n;

    if (n < 2023) cout << 0 << '\n';
    else {
        for (int i = 2023; i <= n; i++) {
            string number = to_string(i);
            bool show[4] = {false,};

            for (int c = 0; c < number.size(); c++) {
                if (number[c] == '2' && !show[0]) {
                    show[0] = true;
                    continue;
                }
                if (number[c] == '0' && show[0] && !show[1]) {
                    show[1] = true;
                    continue;
                }
                if (number[c] == '2' && show[0] && show[1] && !show[2]) {
                    show[2] = true;
                    continue;
                }
                if (number[c] == '3' && show[0] && show[1] && show[2] && !show[3]) {
                    result++;
                    break;
                }
            }
        }
        cout << result << '\n';
    }

    return 0;
}