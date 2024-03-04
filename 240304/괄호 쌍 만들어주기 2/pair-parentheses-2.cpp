#include <iostream>
using namespace std;

string s;
int i,j,cnt;

int main() {
    cin >> s;

    for(i = 0; i < s.size(); i++) {
        if(s[i] == '(') {
            if(s[i+1] == '(') {
                for(j = i + 2; j < s.size(); j++) {
                    if(s[j] == ')') {
                        if(s[j+1] == ')') {
                            cnt++;
                        }
                    }
                }
            }
        }
    }

    cout << cnt;
    return 0;
}