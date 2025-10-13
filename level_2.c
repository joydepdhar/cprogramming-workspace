// Find Largest of 3 Numbers
// #include<stdio.h>
// int main(){
//     int a,b,c;
//     scanf("%d%d%d",&a,&b,&c);

//     if(a>b){
//         if(a>c){
//             printf("%d is largest number",a);
//         }else{
//             printf("%d is largest Number",c);
//         }
//     }else if(b>a){
//         if(b>c){
//             printf("%d is largest Number",b);
//         }else{
//             printf("%d is largest Number",c);
//         }
//     }else{
//         printf("%d is the largest Number",c);
//     }
//     return 0;
// }
// // Leap Year Check
// #include <stdio.h>
// int main() {
//     int x;
//     scanf("%d", &x);

//     if ((x % 400 == 0) || (x % 4 == 0 && x % 100 != 0)) {
//         printf("%d is a leap year", x);
//     } else {
//         printf("%d is not a leap year", x);
//     }

//     return 0;
// }
// Check Prime Number
#include <stdio.h>

int main() {
    int x, i, flag = 0;
    scanf("%d", &x);

    if (x <= 1) {
        printf("%d is not a prime number", x);
        return 0;
    }

    for (i = 2; i < x; i++) {
        if (x % i == 0) {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
        printf("%d is a prime number", x);
    else
        printf("%d is not a prime number", x);

    return 0;
}
