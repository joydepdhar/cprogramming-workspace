#include <stdio.h>

int main() {
    int num,digit;
    scanf("%d",&num);
    digit=num/10;
    int lucy=num%10;
    if((lucy != 0 && digit % lucy == 0) || (digit != 0 && lucy % digit == 0)){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}