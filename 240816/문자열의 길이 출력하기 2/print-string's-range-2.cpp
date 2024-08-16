#include <iostream>
#include <string>
using namespace std;

int main() {
    string s[3];
    int sum = 0;

    for(int i = 0; i < 3; i++) {
        cin >> s[i];

        sum += s[i].size();
    }

    cout << sum;
    return 0;
}