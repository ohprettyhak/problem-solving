#include <iostream>
#include <string> 

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int size;
    string word;
    cin >> size >> word;

    char c[] = {'r', 's', 'e', 'f', 'a', 'q', 't', 'd', 'w', 'c', 'z', 'x', 'v', 'g'};
    int rst = 0;

    for (int i = 0; i < 14; i++) if (word[size - 1] == c[i]) rst = 1;
    cout << rst << '\n';
    
    return 0;
}