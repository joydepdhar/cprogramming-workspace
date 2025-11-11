#include <stdio.h>
void reverseprinting(int n,int i){
    if(i<1){
        return;
    }
    printf("%d",i);
    if (i>1) {
        printf(" ");
    }
    reverseprinting(n,i-1);
}
int main() {
    int n;
    scanf("%d",&n);
    reverseprinting(n,n);
    return 0;
}