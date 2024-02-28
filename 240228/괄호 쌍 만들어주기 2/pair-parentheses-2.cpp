#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    string A;
    cin >> A;

    vector<int> open, close;
    int result = 0;
    for (char c : A) {
        if (c == '(') {
            open.push_back(close.size());
        } else {
            close.push_back(open.size());
            if(close.size() >= 2 && open.size() >= 2 && open[open.size()-2] < close[close.size()-2]) {
                result++;
            }
        }
    }

    cout << result << "\n";
    return 0;
}