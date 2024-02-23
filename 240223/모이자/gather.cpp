#include <bits/stdc++.h>
using namespace std;

int n, minn = 99999;
int a[101], d[101];

int main() {
    
    cin >> n;
    for(int i = 1; i <= n; i++) 
    {
        int ai;
        cin >> ai;
        a[i] = ai;
    }

    for(int i = 1; i <= n; i++)
    {
        int s = 0;
        for(int j = 1; j <= n; j++)
        {
            s += abs((i - j)) * a[j];
        }
        d[i] = s;
    }

    for(int i = 1; i <= n; i++)
    {
        if(minn > d[i])
        {
            minn = d[i];
        }
    }

    cout << minn;
    return 0;
}