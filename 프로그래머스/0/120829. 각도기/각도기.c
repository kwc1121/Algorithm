#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int angle) {
    int answer = angle;
    
    if(answer > 0 && answer < 90)
        return 1;
    else if(answer == 90)
        return 2;
    else if(answer > 90 && answer < 180)
        return 3;
    else if(answer == 180)
        return 4;
}

int main(void){
    int a;
    scanf("%d",&a);
    printf("%d",solution(a));
}