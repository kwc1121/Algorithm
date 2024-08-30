#include <stdio.h>

int main(void){
    int arr[5];
    int cnt=0;
    for (int i=0;i<5;i++){
        scanf("%d",&arr[i]);
        cnt += arr[i];
    }
    printf("%d",cnt);
}