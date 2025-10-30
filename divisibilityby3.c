#include <stdio.h>

int main() {
    long long int n;
    scanf("%lld",&n);
    char number[1000001];
    scanf("%s",number);
    // for(int i=0;i<n;i++){
    //     scanf("%lld",&number[i]);
    // }
    long long int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+number[i]-'0';
    }
    // printf("%lld",sum);
    if(sum%3==0){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return 0;
}