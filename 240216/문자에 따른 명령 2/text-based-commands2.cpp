#include <iostream>
#define MAX 1234567
using namespace std;

string movement;
int d = 3,i, k = 1;
int dx[MAX], dy[MAX];

int main()
{
    //freopen("input.txt", "r", stdin);

    cin >> movement;
    int len = movement.size();

    for(i = 0; i < len; i++)
    {
        if(movement[i] == 'L')
        {
            if(d == 0) d = 3;
            else d = (d - 1) % 4;
        }
        else if(movement[i] == 'R')
            d = (d + 1) % 4;
        else
        {
            if(d == 0)
            {
                dx[k] = dx[k-1] + 1;
                k++;
            }
            else if(d == 1)
            {
                dy[k] = dy[k-1] - 1;
                k++;
            }
            else if(d == 2)
            {
                dx[k] = dx[k-1] - 1;
            }
            else
            {
                dy[k] = dy[k-1] + 1;
                k++;
            }
        }
    }

    cout << dx[k] << " " << dy[k];
    return 0;
}