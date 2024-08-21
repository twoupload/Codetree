#include <iostream>
using namespace std;

/// 순서와 바뀐 순서에 관한 구조체
struct o
{
    int to;
    int from;
};

/// 순서
o order[101];
/// 사용된 순서
o use_order[101];
/// n번 섞은 이후의 카드
long long card_num[101];

int n, i,j;

int main() {
    cin >> n;

    for(i = 1; i <= n; i++) 
    {
        int k;
        cin >> k;

        order[i].to = i;
        order[i].from = k;
    }

    for(i = 1; i <= n; i++) 
        cin >> card_num[i];


    int cnt = 1;
    for(i = 4; i >= 1; i--)
    {
        use_order[cnt].to = order[i].from;
        use_order[cnt].from = order[i].to;
        cnt++;
    }

    for(i = 1; i <= 4; i++)
    {
        int a, b;
        a = card_num[use_order[i].to];
        b = card_num[use_order[i].from];

        //cout << a << " " << b << endl;

        card_num[use_order[i].to] = b;
        card_num[use_order[i].from] = a;

        /*
        for(j = 1; j <= n; j++) 
        {
            cout << card_num[j] << " ";
        }
        cout << endl;
        */
    }

    //cout << endl;
    //cout << endl;

    for(i = 1; i <= n; i++)
        cout << card_num[i] << endl;

    return 0;
}