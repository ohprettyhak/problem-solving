#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int arr[] = {3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10};

    string word;
    cin >> word;

    int rst = 0;
    for (int i = 0; i < word.size(); i++) rst += arr[word[i] - 'A'];
    cout << rst << '\n';
    
    return 0;
}