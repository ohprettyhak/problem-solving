#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO;

    int a[2000], n;
    
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);

    int rst = 0;
    for (int i = 0; i < n; i++) {
        int head = 0, tail = n - 1;
        while (head < tail) {
            if (a[i] == a[head] + a[tail]) {
                if (head != i && tail != i) {
                    rst++;
                    break;
                } else if (head == i) head++;
                else if (tail == i) tail--;
            } else if (a[i] > a[head] + a[tail]) head++;
            else if (a[i] < a[head] + a[tail]) tail--;
        }
    }

    cout << rst << '\n';
    
    return 0;
}