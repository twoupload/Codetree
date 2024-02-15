#include <iostream>

using namespace std;

int dirx[1001], diry[1001];
int n,m,i;
char d;

int main()
{
    int n;

    cin >> n;

    for(i = 1; i <= n; i++)
    {
        cin >> d >> m;

        if(d == 'N')
            dirx[i] = dirx[i], diry[i] = diry[i-1] + m;
        else if(d == 'S')
            dirx[i] = dirx[i-1], diry[i] = diry[i-1] - m;
        else if(d == 'E')
            dirx[i] = dirx[i-1] + m, diry[i] = diry[i-1];
        else
            dirx[i] = dirx[i-1] - m, diry[i] = diry[i-1];
    }

    cout << dirx[n] << " " << diry[n];
    return 0;
}