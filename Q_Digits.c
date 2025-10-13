#include <stdio.h>

int main() {
    long long int x;
    scanf("%lld",&x);
    while(x!=0){
        int digit=x%10;
        printf("%d",digit);
        x=x/10;
    }
    
    return 0;
}