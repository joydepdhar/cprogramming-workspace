#include <stdio.h>
void printingNumber(int i,int n){
    // int i=1;
    if(i>n){
        return;
    }
    printf("%d\n",i);
    printingNumber(i+1,n);
}
int main() {
    int n;
    scanf("%d",&n);
    printingNumber(1,n);
    return 0;
}