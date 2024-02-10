#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int x1, y1, x2, y2;
    int x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> x3 >> y3 >> x4 >> y4;

    int minX = min(x1, x2);
    int minY = min(y1, y2);
    int maxX = max(x1, x2);
    int maxY = max(y1, y2);

    // 두 사각형이 겹치는 영역을 계산합니다.
    int overlapX = max(0, min(x2, x4) - max(x1, x3));
    int overlapY = max(0, min(y2, y4) - max(y1, y3));
    
    // 겹치는 영역이 있다면
    if (overlapX > 0 && overlapY > 0) {
        // 겹치는 영역을 첫 번째 사각형에서 제거합니다.
        if (x1 == max(x1, x3)) minX = min(x1, x4);
        if (y1 == max(y1, y3)) minY = min(y1, y4);
        if (x2 == min(x2, x4)) maxX = max(x2, x3);
        if (y2 == min(y2, y4)) maxY = max(y2, y3);
    }

    // 남아있는 첫 번째 사각형의 부분을 덮는 최소 사각형의 넓이를 계산합니다.
    int area = (maxX - minX) * (maxY - minY);

    cout << area << endl;

    return 0;
}