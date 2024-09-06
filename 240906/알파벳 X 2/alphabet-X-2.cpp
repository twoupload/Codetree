#include <iostream>
using namespace std;

string str;
int i, j, cnt;

// 구조체
struct alp {
	int start, end;
};

// 구조체 초기화
alp segments[26];

// 한번 알아봤던 것인지 확인하는 배열
int check[26];

int main()
{
	//freopen("input.txt", "r", stdin);

	cin >> str;

	// 각 알파벳의 시작지점과 끝나는 지점을 구한다.
	for (i = 0; i < 52; i++) {
		int num = str[i] - 'A';

		if (check[num] == 0) {
			segments[num].start = i;
			for (j = i + 1; j < 52; j++) {
				if (str[i] == str[j])
					segments[num].end = j;
			}
			check[num] = 1;
		}
	}

	// 하나씩 비교하면서 대응되는 알파벳이 완벽하게 겹치는지 어중간하게 겹치는지 구한다.
    for (int i = 0; i < 26; i++) {
        for (int j = i + 1; j < 26; j++) {
            // 선분 i와 j가 겹치는지 확인
            if (segments[i].end < segments[j].start || segments[j].end < segments[i].start) {
                continue; // 겹치지 않음
            }
            // 어중간하게 겹치는지 확인
            if (segments[i].start < segments[j].start && segments[i].end > segments[j].end) {
                continue; // 완전히 포함
            }
            if (segments[j].start < segments[i].start && segments[j].end > segments[i].end) {
                continue; // 완전히 포함
            }
            // 어중간하게 겹치는 경우
            cnt++;
        }
	}

	cout << cnt;
	
	return 0;
}