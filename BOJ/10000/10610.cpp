#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string word;
    cin >> word;
    
    int sum = 0;
    vector<int> numbers(word.length());
    bool zero = false;
    for (int i = 0; i < word.length(); i++) {
        int temp = word[i] - '0';
        if (temp == 0) zero = true;
        sum += temp;
        numbers[i] = temp;
    }
    
    if (!zero || (sum % 3 != 0)) {
        printf("-1");
        return 0;
    }
    
    sort(numbers.begin(), numbers.end(), greater<int>());
    for (int i = 0; i < word.length(); i++) printf("%d", numbers[i]);
    
    return 0;
}