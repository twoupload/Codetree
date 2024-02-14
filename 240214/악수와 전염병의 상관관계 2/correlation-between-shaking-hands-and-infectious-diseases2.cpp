#include <iostream>
#include <algorithm>

using namespace std;

int N, T, K, P, t, x, y;
int i;

struct INFO {
    int ti, px, py;
};

struct INF_P {
    bool inf, sw = true;
    int cnt = 0;
};

bool sorting(INFO& f1, INFO& f2) {
    return f1.ti < f2.ti;
}

INF_P infp[1001];
INFO info[1001];

int main()
{
    // N = 개발자 수
    // P = 감염된 개발자
    // K = 전염 횟수
    // T = 행동의 횟수
    //freopen("input.txt", "r", stdin);

    cin >> N >> K >> P >> T;

    infp[P].inf = true;

    for(i = 1; i <= T; i++) {
        cin >> t >> x >> y;

        info[i].ti = t, info[i].px = x, info[i].py = y;
    }

    sort(info, info + T + 1, sorting);

    for(i = 1; i <= T; i++) {
        if(infp[info[i].px].sw == true && infp[info[i].py].sw == true) {
            if(infp[info[i].px].inf == true) {
                infp[info[i].px].cnt += 1;
                infp[info[i].py].inf = true;
            }
            else {
                if(infp[info[i].py].inf == true) {
                    infp[info[i].py].cnt += 1;
                    infp[info[i].px].inf = true;
                }
                else continue;
            }
        }
        else continue;

        if(infp[info[i].px].cnt >= K) infp[info[i].px].sw = false;
        if(infp[info[i].py].cnt >= K) infp[info[i].py].sw = false;
    }

    for(i = 1; i <= N; i++) {
        cout << infp[i].inf;
    }

    return 0;
}