#include <stdio.h>
// void fun(int x){
// x=20;
// printf("fun function er x er address: %p\n",&x);
// }
void fun (int* x){
    *x=20;
    printf("fun function er x er address: %p\n",&x);
}
int main() {
    // passbyvalue
    // int x=10;
    // fun(x);
    // printf("Main function er x er address: %p",&x);
    //passbyreference
    int x=10;
    fun(&x);
    printf("Main function er x er address: %d",x);
    return 0;
}