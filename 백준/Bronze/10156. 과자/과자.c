#include <stdio.h>

int main(void){
    
    int a,b,c;
    
    scanf("%d %d %d",&a,&b,&c);
    
    if(a*b > c){
        printf("%d",(c - (a*b))*-1);
    }
    else{
        printf("0");
    }
    
    
    return 0;
}