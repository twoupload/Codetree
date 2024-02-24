#include <iostream>
using namespace std;

string a;
int i, j, cnt;

int main() {
    cin >> a;
    
    for(i = 0; i < a.size(); i++) {
        if(a[i] == '(') {
            for(j = i; j < a.size(); j++) {
                if(a[j] == ')') cnt++;
            }
        }
    }

    cout << cnt;
    return 0;
}