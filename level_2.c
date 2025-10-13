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
// // Check Prime Number
// #include <stdio.h>

// int main() {
//     int x, i, flag = 0;
//     scanf("%d", &x);

//     if (x <= 1) {
//         printf("%d is not a prime number", x);
//         return 0;
//     }

//     for (i = 2; i < x; i++) {
//         if (x % i == 0) {
//             flag = 1;
//             break;
//         }
//     }

//     if (flag == 0)
//         printf("%d is a prime number", x);
//     else
//         printf("%d is not a prime number", x);

//     return 0;
// }
// // Print all Prime Numbers up to N
// #include <stdio.h>

// int main() {
//     int n;
//     scanf("%d", &n);

//     for (int i = 2; i <= n; i++) {
//         int isPrime = 1; 
//         for (int j = 2; j * j <= i; j++) { 
//             if (i % j == 0) {
//                 isPrime = 0;
//                 break;
//             }
//         }
//         if (isPrime) {
//             printf("%d ", i);
//         }
//     }

//     return 0;
// }
// Fibonacci Series up to N terms
// #include <stdio.h>

// int main() {
//     int first=0,sec=1;
//     int n;
//     scanf("%d",&n);
//     for(int i=0;i<=n;i++){
//         printf("%d ,",first);
//         int number=first+sec;
//         first=sec;
//         sec=number;
//     }
//     return 0;
// }
// // Palindrome Number
// #include <stdio.h>

// int main() {
//     int x,rev=0;
//     int original;
//     scanf("%d",&x);
//     original=x;
//     while(x!=0){
//         int digit=x%10;
//         rev=rev*10+digit;
//         x=x/10;
//     }
//     if(original==rev){
//         printf("Palindrome!!!");
//     }else{
//         printf("Not");
//     }
//     return 0;
// }
// Armstrong Number
// #include <stdio.h>

// int main() {
//     int x,original,count=0;
//     scanf("%d",&x);
//     original=x;
//     while(x!=0){
//         int digit=x%10;
//         count=count+(digit*digit*digit);
//         x=x/10;
//     }
//     if(original==count){
//         printf("Yeap !!!! Armstrong Number");
//     }else{
//         printf("Oh Noooooo!!!! No a Armstrong Number");
//     }
    
//     return 0;
// }
// #include <stdio.h>

// int main() {
//     int a,b;

//     return 0;
// }