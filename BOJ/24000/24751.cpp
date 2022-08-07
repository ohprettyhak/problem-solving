#include <iostream>

using namespace std;

int main() {
    double optionOne;
    cin >> optionOne;
    
    printf("%.10f\n%.10f\n", (100 / optionOne), (100 / (100 - optionOne)));
}