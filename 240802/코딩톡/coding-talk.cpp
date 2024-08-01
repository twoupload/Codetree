#include <iostream>

#define MAX_M 100

using namespace std;

int n, p, m;
char c[MAX_M];
int u[MAX_M];

int main() {
    // 입력
    cin >> n >> m >> p;
    for(int i = 0; i < m; i++)
        cin >> c[i] >> u[i];

    // 모두 읽은 채팅이라면 읽지 않은 사람은 없습니다.
    if(u[p - 1] == 0)
        return 0;
    
    // 각 사람에 대해 채팅을 읽었을지 안 읽었을지 판단합니다.
    for(int i = 0; i < n; i++) {
        // read : 확실하게 채팅을 읽었으면 true
        char person = 'A' + i;
        bool read = false;

        // 만약 p번 메시지를 읽은 사람 수와 같은 채팅을 기준으로
        // 한번이라도 채팅을 쳤다면 확실하게 채팅을 읽었습니다.
        for(int j = 0; j < m; j++)
            if(u[j] >= u[p - 1] && c[j] == person)
                read = true;
            
        if(read == false)
            cout << person << " ";
    }
    
    return 0;
}