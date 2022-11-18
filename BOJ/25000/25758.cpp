#include <bits/stdc++.h>

#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

int main() {
    FASTIO;

    int temp[26][26] = {0, };
    vector<string> dna;
    int n;
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;

        // consider same word input twice (ex. AA & AA → A)
        if (temp[word[0] - 'A'][word[1] - 'A'] < 2) {
            temp[word[0] - 'A'][word[1] - 'A'] += 1;
            dna.push_back(word);
        }
    }

    set<char> nd;
    for (int i = 0; i < dna.size(); i++) {
        for (int j = 0; j < dna.size(); j++) {
            if (i == j) continue;
            if (dna[i][0] > dna[j][1]) nd.insert(dna[i][0]);
            else nd.insert(dna[j][1]);
        }
    }

    cout << nd.size() << '\n';
    for (auto i = nd.begin(); i != nd.end(); i++) cout << *i << ' ';
    
    return 0;
}