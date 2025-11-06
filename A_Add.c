#include <stdio.h>
int add(long long int x,long long int y){
    return x+y;
}
int main() {
    
    long long int a,b;
    scanf("%lld %lld",&a,&b);
    long long int result=add(a,b);
    printf("%lld",result);
    return 0;
}