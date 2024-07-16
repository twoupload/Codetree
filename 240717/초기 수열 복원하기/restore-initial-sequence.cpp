#include <iostream>
#include <algorithm>
#define MAX_N 1000
using namespace std;

int n;
int num[MAX_N];

int main() {
    // 여기에 코드를 작성해주세요.
    cin>>n;
    int count[n+1]={};  // 각 숫자가 1개씩 나오는지 세는 배열
    for(int i=0;i<n-1;i++){
        cin>>num[i];
    }
    int real[n]={}; // 원래 수열을 기록할 배열
    for(int i=1;i<num[0];i++){
        bool correct =true;
        int first =i;
        int start=0;
        real[start]=first;
        count[first]++;
        for(int j=0;j<n-1;j++){
            first=num[j]-first;
            if(first<=0||first>n){
                correct=false;        
                //continue ----> 여기 이부분
            }
            start++;
            real[start]=first;
            count[first]++;
        }
        for(int j=1;j<n+1;j++){
            if(count[j]>1){
                correct=false;
            }

        }
        if(correct==true){
            for(int j=0;j<n;j++){
                cout<<real[j]<<" ";
            }
            return 0;
        }
        if(correct==false){
            // for(int j=0;j<n;j++){
            //     cout<<real[j]<<" ";
            // }
            // cout<<endl;
            for(int j=0;j<n;j++){
                real[j]=0;
                
            }
            for(int j=1;j<n+1;j++){
                count[j]=0;
                
            }
        }
    }
    return 0;
}