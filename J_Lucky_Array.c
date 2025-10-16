#include <stdio.h>

int main() {
    long long int n,count=0;
    scanf("%lld",&n);
    long long int num[n];
    for(int i=0;i<n;i++){
        scanf("%lld",&num[i]);    
    }
    long long int min=num[0];
    for(int i=0;i<n;i++){
        if(min>num[i]){
            min=num[i];
        }
    }
    for(int i=0;i<n;i++){
        if(min==num[i]){
            count++;
        }
    }
    if(count%2==0){
        printf("Unlucky");
    }else{
        printf("Lucky");
    }

    return 0;
}