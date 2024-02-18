#include <iostream>

using namespace std;

int dx[4] = {1,0,-1,0}, dy[4] = {0,1,0,-1};
int i;


int main()
{
    //freopen("input.txt", "r", stdin);

    string s;
    int len, dir = 0;
    int x = 0, y = 0;
    cin >> s;

    len = s.size();

    for(i = 0; i < len; i++) {
        if(s[i] == 'R') {
            dir = (dir + 1) % 4;
        }
        else if(s[i] == 'L') {
            if(dir == 0) {
                dir = 3;
            }
            else {
                dir = (dir - 1) % 4;
            }
        }
        else {
            x = x + dx[dir], y = y + dy[dir];
        }


        if(x == 0 && y == 0) {
            cout << i + 1;
            return 0;
        }
    }

    cout << -1;
    return 0;
}