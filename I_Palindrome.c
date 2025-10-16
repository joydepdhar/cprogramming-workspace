#include <stdio.h>

int main() {
    int x,rev=0;
    int original;
    scanf("%d",&x);
    original=x;
    while(x!=0){
        int digit=x%10;
        rev=rev*10+digit;
        x=x/10;
    }
    if(original==rev){
        printf("%d\nYES",rev);
    }else{
        printf("%d\nNO",rev);
    }
    return 0;
}