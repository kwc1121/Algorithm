#include <stdio.h>

int main(void){
    int n;
    int arr[1000001];
    scanf("%d",&n);
   
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    int sum;
    sum = arr[0];
    
    for(int j=1;j<n;j++){
        if(sum >= arr[j]){
            continue;
        }
        else{
            sum = arr[j];
        }
    }
    
    int value;
    int z = arr[0];
    
    for(int k=0;k<n;k++){
        if(z <= arr[k]){
            continue;
        }   
        else{
            z = arr[k];
        }
    }
    
    printf("%d %d",z,sum);
    
}