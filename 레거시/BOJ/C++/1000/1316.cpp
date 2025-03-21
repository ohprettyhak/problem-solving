#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int rst = 0;
    
    int t;
    cin >> t;

    while (t--) {
        int isGroup = true;
        string word;
        
        cin >> word;
        
        for (int i = 0; i < word.length(); i++){
			for (int j = 0; j < i; j++) {
				if (word[i] != word[i - 1] && word[i] == word[j]) {
					isGroup = false;
					break;			
				}				
			}
		}
		if (isGroup) rst++;
    }
    
    cout << rst << '\n';
    
    return 0;
}