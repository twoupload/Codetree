#include <iostream>
using namespace std;

void show();

int main() {
    
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        show();
    }

    return 0;
}

void show() {

    cout << "Hello" << endl;
    cout << "#@#@#@#@#@" << endl;
    cout << "CodeTree" << endl;
    cout << "@#@#@#@#@#" << endl;
    cout << "Students!" << endl;
    cout << endl;
}