// call stack
#include <stdio.h>
void Mello(){
    printf("Mello \n");
}
void gello(){
    printf("Gello \n");
    Mello();
}
void Hello(){
    printf("Hello \n");
    gello();
}
int main() {
    printf("Hi\n");
    Hello();
    return 0;
}