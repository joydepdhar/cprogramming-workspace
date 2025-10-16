#include <stdio.h>

int main() {
    int n,found=1;
    scanf("%d",&n);
    long long int num[n];
    for(int i=0;i<n;i++){
        scanf("%lld",&num[i]);
    }
    long long int x;
    scanf("%lld",&x);
    for(int i=0;i<n;i++){
        if(x==num[i]){
            printf("%d",i);
            found=0;
            break;
        }
    }
    if(found==1){
        printf("-1");
    }
    
    return 0;
}