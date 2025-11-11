#include<stdio.h>
int factorial(int n){
    // int factorial=1;
    // for(int i=n;i>0;i--){
    //     factorial=factorial*i;
    // }
    if(n==1 || n==0){
        return 1;
    }
    int mul=factorial(n-1);
    return n*mul;
}
int main(){
    int n;
    scanf("%d",&n);
    long long int fact=factorial(n);
    printf("%lld",fact);
}