#include <iostream>
#include <string> 

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    string word;
    cin >> word;
    
    for (int i = word.length() - 1; i >= 0; i--) cout << word[i];
    
    return 0;
}