#include <iostream>
using namespace std;

int combigger(int a, int b, int c) {
    if(b > a && b > c) return 1;
    else return 0;
}

int comsame(int a, int b, int c) {
    if(a == b && b == c) return 1;
    else return 0;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    cout << combigger(a, b, c) << " " << comsame(a, b, c) << endl;
    return 0;
}