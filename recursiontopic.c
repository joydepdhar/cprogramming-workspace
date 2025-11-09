// // // call stack
// #include <stdio.h>
// // void Mello(){
// //     printf("Mello \n");
// // }
// void gello(){
//     printf("Gello \n");
//     // Mello();
// }
// void Hello(){
//     gello();
//     printf("Hello \n");
    
// } 
// int main() {
//     printf("main\n");
//     Hello();
//     return 0;
// }
// // recursion function
// // #include <stdio.h>

// // // void Hello(){//function is call recurssion function 
// // //     printf("Hello \n");
// // //     Hello();//this is recurssion not recurssion function...
// // // it will go infinity loop which can be controlled by human

// // // } 
// // //controlling recurrsion 
// // void Hello(int i){
// //     if(i==0){//end conditions
// //         return;
// //     }
// //     printf("%d\n",i);//print 
// //     Hello(i-1);//increment / decrement
// // }
// // int main() {
// //     printf("Hi\n");
// //     int i=5;//starting 
// //     Hello(i);
// //     return 0;
// // }
#include <stdio.h>
void fun(){
    printf("Fun\n");
    fun();
}
int main() {
    fun();
    return 0;
}