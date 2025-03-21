#include <iostream>
#include <string> 

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    string word;
    while (true) {
        getline(cin, word);
        if (word == "") break;
        cout << word << '\n';
    } 
    
    return 0;
}