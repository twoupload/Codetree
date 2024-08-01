#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> v;
vector<int>::iterator iter;

int main() {
    // 여기에 코드를 작성해주세요.

    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int nn;
        cin >> nn;

        v.push_back(nn);
    }

    reverse(v.begin(), v.end());

    for(iter = v.begin(); iter != v.end(); iter++) { cout << *iter << " " ;}
    return 0;
}