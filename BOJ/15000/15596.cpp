#include <iostream>
#include <vector>

using namespace std;

long long sum(vector<int> &a) {
    long long rst = 0;
    for (int i = 0; i < a.size(); i++) rst += a[i];
    return rst;
}