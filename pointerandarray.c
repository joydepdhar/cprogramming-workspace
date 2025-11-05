// pointer variable
#include <stdio.h>

int main() {
    int x=10;
    printf("%d\n",x);
    printf("%p \n",&x);
    int* prt;
    prt=&x;
    printf("%p\n",prt);
    printf("%p",&prt);
    return 0;
}
