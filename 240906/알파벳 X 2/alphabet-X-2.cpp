#include <iostream>
using namespace std;

string str;
int i, j, cnt;

// 구조체
struct alp {
	int startPos, endPos;
};

// 구조체 초기화
alp alpArr[26];

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
			alpArr[num].startPos = i;
			for (j = i + 1; j < 52; j++) {
				if (str[i] == str[j])
					alpArr[num].endPos = j;
			}
			check[num] = 1;
		}
	}

	// 하나씩 비교하면서 대응되는 알파벳이 완벽하게 겹치는지 어중간하게 겹치는지 구한다.
	for (i = 0; i < 25; i++) {
		for (j = i + 1; j < 26; j++) {
			// 비교 끝점 < 기준 시작점
			if (alpArr[j].endPos < alpArr[i].startPos) continue;
			// 비교 시작점 > 기준 끝점
			else if (alpArr[j].startPos > alpArr[i].endPos) continue;
			// 기준의 시작점 < 비교 시작점과 끝점 < 기준의 끝점
			else if (alpArr[j].startPos > alpArr[i].startPos && alpArr[j].endPos < alpArr[i].endPos) continue;
			// 나머지를 카운트
			else {
				cnt++;
			}
		}
	}

	cout << cnt;
	
	return 0;
}