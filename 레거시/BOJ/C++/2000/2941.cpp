#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    vector<string> croa = {"c=","c-","dz=","d-","lj","nj","s=","z="};
    int idx;
    string word;
    
    cin >> word; 
    
    for (int i = 0; i < croa.size(); i++) {
        idx = word.find(croa[i]);
        for (; idx != string::npos; idx = word.find(croa[i])) {
            word.replace(idx, croa[i].length(), "_");
        }
    }
    cout << word.length() << '\n';
    
    return 0;
}