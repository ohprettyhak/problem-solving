#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    string word;
    while (getline(cin, word)) cout << word << '\n';
    
    return 0;
}