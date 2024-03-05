#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int count = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i; j < n; j++) {
            int sum = 0;
            for(int k = i; k <= j; k++) {
                sum += arr[k];
            }
            double avg = (double)sum / (j - i + 1);

            bool check = false;
            for(int k = i; k <= j; k++) {
                if(arr[k] == avg) {
                    check = true;
                    break;
                }
            }

            if(check) {
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}