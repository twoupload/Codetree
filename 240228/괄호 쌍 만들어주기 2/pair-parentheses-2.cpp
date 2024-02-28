#include<bits/stdc++.h>
using namespace std;

int main() {
    string A;
    cin >> A;
    
    int len = A.size();
    int open[len] = {0}, close[len] = {0};
    
    if(A[0] == '(') {
        open[0] = 1;
    }
    if(A[len - 1] == ')') {
        close[len - 1] = 1;
    }
    
    for(int i = 1; i < len; i++) {
        if(A[i] == '(')
            open[i] = open[i - 1] + 1;
        else
            open[i] = open[i - 1];
    }
    
    for(int i = len - 2; i >= 0; i--) {
        if(A[i] == ')')
            close[i] = close[i + 1] + 1;
        else
            close[i] = close[i + 1];
    }
    
    int pairs = 0;
    for(int i = 0; i < len - 1; i++) {
        if(A[i] == '(')
            pairs += close[i + 1] - open[i + 1];
    }
    
    cout << pairs << "\n";
    return 0;
}