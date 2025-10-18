// insert in array
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n+1];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int x,val;
    scanf("%d%d",&x,&val);
    for(int i=n;i>=x+1;i--){
        if(i!=x){
            arr[i]=arr[i-1];
        }else{
            arr[x]=val;
        }
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}