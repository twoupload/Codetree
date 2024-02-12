#include <iostream>

using namespace std;

int n,m,k,pen;
int i,j;
int people[101];

int main()
{
    //freopen("input.txt", "r", stdin);

    cin >> n >> m >> k;

    for(i = 1; i <= m; i++) {
        cin >> pen;

        people[pen] += 1;

        for(j = 1; j <= n; j++) {
            if(people[j] == k) {
                cout << j;
                return 0;
            }
        }
    }

    cout << -1;
    return 0;
}