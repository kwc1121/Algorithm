#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int num = n;
    int result = 0;
    
    for(int i=2;i<=num;i++){
        if(i%2==0)
            result+=i;
        else
            continue;
    }
    
    return result;
}

int main(void){
    int a,b;
    scanf("%d %d",&a);
    printf("%d",solution(a));
}