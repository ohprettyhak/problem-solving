#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO;

    int a[10000];
    int n;
    
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);

    int start, end;
    long long rst = 0;
    
    for (int i = 0; i < n - 2; i++) {
        start = i + 1;
        end = n - 1;

        int temp = 0;
        while (start < end) {
            if (a[i] + a[start] + a[end] < 0) start++;
            else if (a[i] + a[start] + a[end] > 0) end--;
            else {
                if (a[start] == a[end]) {
                    rst += end - start;
                    temp = 0;
                } else {
                    if (temp == 0) {
                        int idx = end;
                        while (idx > start && a[idx--] == a[end]) temp++;
                    }
                    rst += temp;
                }
                start++;
            }

            if (a[i] + a[start] + a[end] != 0) temp = 0;
        }
    }

    cout << rst << '\n';
    
    return 0;
}