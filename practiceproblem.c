#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int x,n;
    scanf("%d",&x);
    int arr[x];
    for(int i=0;i<x;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        if( i ==n-1){
            if(arr[i]==0){
                arr[i]=1;
            }else{
                arr[i]=0;
            }
        }
    }
    for(int i=0;i<x;i++){
        printf("%d ",arr[i]);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
