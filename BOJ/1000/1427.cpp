#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	string word;
	cin >> word;
	
	vector<int> numbers(word.length());
	for (int i = 0; i < word.length(); i++) numbers[i] = word[i] - '0';
	sort(numbers.begin(), numbers.end(), greater<int>());
	
	for (int i = 0; i < numbers.size(); i++) printf("%d", numbers[i]);
	return 0;
}