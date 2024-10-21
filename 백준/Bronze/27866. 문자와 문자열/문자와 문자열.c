#include <stdio.h>

int main() {
    char arr[1001];
    scanf("%s",arr);
    
    int num;
    scanf("%d",&num);
    
    printf("%c",arr[num-1]);
    
}