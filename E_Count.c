#include <stdio.h>

int main() {
    char a[1000001];
    int sum=0;
    fgets(a,1000001,stdin);
    for(int i=0;a[i]!='\0';i++){
        if (a[i] >= '0' && a[i] <= '9') {
            sum += a[i] - '0';
        }
    }
    printf("%d",sum);
}