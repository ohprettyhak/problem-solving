#include <iostream>
#include <cstring>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
        
    int t;
    scanf("%d", &t);
    
    int result = 0;
    while (t--) {
        char word[10000];
        scanf("%s", word);
        
        int cnt = 0;
        
        char* ptr = strstr(word, "for");
        while (ptr != NULL) {
            ptr = strstr(ptr + 1, "for");
            cnt++;
        }
        
        ptr = strstr(word, "while");
        while (ptr != NULL) {
            ptr = strstr(ptr + 1, "while");
            cnt++;
        }
        
        result = max(result, cnt);
    }
    printf("%d\n", result);
    
    return 0;
}