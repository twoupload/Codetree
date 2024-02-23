#include<iostream>
#include<string>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = n; i > 0; --i) {
        cout << string(i, '*') + string(2 * (n - i), ' ') + string(i, '*') << endl;
    }

    return 0;
}