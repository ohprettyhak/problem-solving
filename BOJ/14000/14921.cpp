#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO;

    int n;
	int numbers[100000];
	
	cin >> n;
	for (int i = 0; i < n; i++) cin >> numbers[i];
	
	int start = 0, end = n - 1, temp = INT_MAX;
	int result[2] = {0, };
	
	while (start < end) {
        int sum = numbers[start] + numbers[end];
		
		if (temp > abs(sum)) {
			temp = abs(sum);
			result[0] = numbers[start];
			result[1] = numbers[end];
		}
		
		if (sum < 0) start += 1;
		else end -= 1;
	}
	
	cout << result[0] + result[1] << '\n';
    
    return 0;
}