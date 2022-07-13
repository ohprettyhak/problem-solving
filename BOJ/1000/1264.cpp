#include <iostream>
#include <cstring>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    while (1) {
        char s[256];
        int rst = 0;
        cin.getline(s, 256);

        if (s[0] == '#') break;
        for (int i = 0; i < strlen(s) - 1; i++) {
            if (s[i] == 'a' || s[i] == 'A') rst++;
		    if (s[i] == 'e' || s[i] == 'E') rst++;
		    if (s[i] == 'i' || s[i] == 'I') rst++;
		    if (s[i] == 'o' || s[i] == 'O') rst++;
		    if (s[i] == 'u' || s[i] == 'U') rst++;
        }
        cout << rst << '\n';
    }
    
    return 0;
}