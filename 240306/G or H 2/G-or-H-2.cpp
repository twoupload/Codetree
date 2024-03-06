#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> person(10001);
    int max = 0;
    for(int i = 0; i < n; i++) {
        int a;
        string b;
        cin >> a >> b;
        if(b == "G") {
            person[a] = 1;
        } else {
            person[a] = 2;
        }
    }
    for(int i = 1; i < 101; i++) {
        if (person[i] == 0) continue;
        int g = 0;
        int h = 0;
        for(int j = i; j < 101; j++){
            if (person[j] == 0) continue;
            else if(person[j] == 1) {
                g++;
            } else {
                h++;
            }
            if(g == 0 || h == 0 || g == h) {
                max = (j - i > max)? j - i : max;     
            }
        }
    }
    cout << max;
    return 0;
}