#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	int t;
	string numbers[10000];
	scanf("%d", &t);
	
	while (t--) {
		int n;
		scanf("%d", &n);
		for (int i = 0; i < n; i++) cin >> numbers[i];
		
		sort(numbers, numbers + n);
		
		bool here = false;
		for (int i = 0; i < n - 1; i++) {
			int curLen = numbers[i].length();
			int nextLen = numbers[i + 1].length();
			
			if (curLen >= nextLen) continue;
			
			if (numbers[i + 1].substr(0, curLen)== numbers[i]) {
				here = true;
				break;
			}
		}
		
		if (here) printf("NO\n");
		else printf("YES\n");
	}
	
	return 0;
}