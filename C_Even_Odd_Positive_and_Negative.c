#include <stdio.h>

int main() {
    int x,a;
    int ev=0,od=0,pos=0,neg=0;
    scanf("%d",&x);
    for(int i =1; i<=x;i++){
        scanf("%d",&a);
         if (a % 2 == 0) {
            ev++;
        }
        else {
            od++;
        }
        if (a > 0) {
            pos++;
        }
        else if (a < 0) {
            neg++;
        }
    }
    printf("Even: %d\n",ev);
    printf("Odd: %d\n",od);
    printf("Positive: %d\n",pos);
    printf("Negative: %d\n",neg);
    return 0;
}