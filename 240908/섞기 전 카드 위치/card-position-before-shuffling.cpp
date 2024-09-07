#include <iostream>
#include <map>
using namespace std;

int n, i, j;

int num[101], original[101], temp[101], sec[101];

map<int, int> mp;

int main()
{
	//freopen("input.txt", "r", stdin);
	cin >> n;
	
	for (i = 1; i <= n; i++)
		original[i] = i;
	
	for (i = 1; i <= n; i++)
		cin >> sec[i];

	for (i = 1; i <= n; i++)
		cin >> num[i];

	for (i = 1; i <= 3; i++) {
		for (j = 1; j <= n; j++) {
			int switchA = j, switchB = sec[j];
			temp[switchB] = original[switchA];
		}

		for (j = 1; j <= n; j++)
			original[j] = temp[j];
	}

	for (i = 1; i <= n; i++)
		mp.insert({ original[i], num[i] });

	for (auto iter = mp.begin(); iter != mp.end();  iter++)
		cout << iter->second << endl;
	return 0;
}