#include<iostream>
#include<stdio.h>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);

    int o = n, e = 1;
    for(int i = 0; i <n * 2; i++) {
        if(i % 2 == 0) {
            for(int j = 1; j <= o; j++) {
                printf("* ");
            }
            o--;
        }
        else {
            for(int j = 1; j <= e; j++) {
                printf("* ");
            }
            e++;
        }
        printf("\n");
    }

    return 0;
}