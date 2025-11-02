#include <stdio.h>
int addnumber(int x, int y){
    int sum=x+y;
    return sum;
}
int main() {
    int number=addnumber(10,20);
    printf("%d",number);
    return 0;
}