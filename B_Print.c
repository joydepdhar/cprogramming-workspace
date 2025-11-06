#include <stdio.h>
void print(long long int x){
    for(int i=1;i<=x;i++){
        printf("%d ",i);
    }
}
int main() {
    long long int x;
    scanf("%lld",&x);
    print(x);
    return 0;
}