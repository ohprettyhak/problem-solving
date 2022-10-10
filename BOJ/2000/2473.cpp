#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO;

    long long a[5000];
    int n;
    
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);

    long long score = LONG_MAX, start, end, result[3];
    for (int i = 0; i < n - 2; i++) {
        start = i + 1;
        end = n - 1;

        while (start < end) {
            long long sum = a[i] + a[start] + a[end];
            if (abs(sum) < score) {
                score = abs(sum);
                result[0] = a[i];
                result[1] = a[start];
                result[2] = a[end];
            }
            
            if (sum < 0) start++;
            else if (sum > 0) end--;
            else break;
        }
    }

    sort(result, result + 3);
    cout << result[0] << " " << result[1] << " " << result[2] << '\n';
    
    return 0;
}