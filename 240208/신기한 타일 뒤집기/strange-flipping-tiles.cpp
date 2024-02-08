#include <iostream>
#include <algorithm>

using namespace std;

int n, x, r, l;
char re;
int a[1001];

int main()
{
    //freopen("input.txt", "r", stdin);
    cin >> n;
    int k = 100;
    for(int i = 0; i < n; i++) {
        cin >> x >> re;

        if(re == 'R') {
            for(int j = k; j < k + x; j++) {
                a[j] = 1;
            }
            k = k + x - 1;
        }

        else {
            for(int j = k; j > k - x; j--) {
                a[j] = -1;
            }
            k = k - x + 1;
        }
    }

    for(int i = 0; i <= 1000; i++) {
        if(a[i] == 1) r++;
        else if(a[i] == -1) l++;
        else continue;
    }

    cout << max(r, l) << " " << min(r, l);

    return 0;
}