#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string s;
    string buffer;
    int cnt = 0;

    getline(cin, s);

    for(int i = 0; i < s.size(); i++) {
        if(s[i] == ' ') cnt++;
    }

    cout << cnt + 1 << endl;

    istringstream iss(s);

    while(getline(iss, buffer, ' ')) {
        cout << buffer << endl;
    }
    
    return 0;
}