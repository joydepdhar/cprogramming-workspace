// type of functions
// // 1. return + parameters
// // #include <stdio.h>
// // int addnumber(int x, int y){
// //     int sum=x+y;
// //     return sum;
// // }
// // int main() {
// //     int number=addnumber(10,20);
// //     printf("%d",number);
// //     return 0;
// // // }
// 2. return + no parameters
// #include <stdio.h>
// int sum(){
//     int a,b;
//     int sum;
//     scanf("%d%d",&a,&b);
//     sum=a+b;
//     return a+b;
// }
// int main() {
//     int result=sum();
//     printf("%d",result);
//     return 0;
// }
// 
// 3. no return + parameters
#include <stdio.h>
void sum(int a, int b){
    int ans=a+b;
    printf("%d",ans);
}
int main() {
    int a=40,b=20;
    sum(40,20);
    return 0;
}
// 4. no return + no parameters