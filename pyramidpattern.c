#include <stdio.h>

int main() {
    int n,star=1;
    scanf("%d",&n);
    int space=n-1;
    for(int i=1;i<=n;i++){
        // for loop for space 
        for(int i=1;i<=space;i++){
            printf(" ");
        }
        // printf("Kaj");star print kora
        for(int j=1;j<=star;j++){
            printf("*");
        }
        printf("\n");
        star+=2;
        space--;
    }
    return 0;
}