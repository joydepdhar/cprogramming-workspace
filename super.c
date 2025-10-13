// // #include <stdio.h>

// // int main() {
// //     int a,b;
// //     scanf("%d%d",&a,&b);
// //     if(a%b==0 || b%a==0){
// //         printf("Multiples");
// //     }else{
// //         printf("No Multiples");
// //     }
// //     return 0;
// // }
// // #include <stdio.h>

// // int main() {
// //     int a;
// //     int first;
// //     scanf("%d",&a);

// //     while(a !=0){
// //         int digit=a%10;
// //         first=digit;
// //         a=a/10;
// //     }
// //     // printf("%d",first);
    
// //     if(first%2==0){
// //         printf("EVEN");
// //     }
// //     else{
// //         printf("ODD");
// //     }
// //     return 0;
// // }
// // #include <stdio.h>

// // int main() {
// //     char a;
// //     scanf("%c",&a);
// //     if(a>='a' && a<='z'){
// //         a=a-32;
// //         printf("%c",a);
// //     }else{
// //         a=a+32;
// //         printf("%c",a);
// //     }
// //     return 0;
// // }
// // #include <stdio.h>

// // int main() {
// //     char a;
// //     scanf("%c",&a);
// //     if(a>=48 && a<=57){
// //         printf("IS DIGIT");
// //     }else if(a>='a' && a<='z'){
// //         printf("ALPHA\nIS SMALL");
// //     }else if(a>='A' && a<='Z'){
// //         printf("ALPHA\nIS CAPITAL");
// //     }
// //     return 0;
// // }
// #include <stdio.h>

// int main() {
//     int a,b,c;
//     scanf("%d %d %d",&a,&b,&c);
//     if(a<=b && a<=c){
//         printf("%d ",a);
//     }
//     else if(b<=a && b<=c){
//         printf("%d ",b);
//     }else if(c<=a && c<=b){
//         printf("%d ",c);
//     }
//     if(a>=b && a>=c){
//         printf("%d",a);
//     }
//     else if(b>=a && b>=c){
//         printf("%d",b);
//     }else if(c>=a && c>=b){
//         printf("%d",c);
//     }

//     return 0;
// }
// #include <stdio.h>

// int main() {
//     int x=0;
//     if(x==1){
//         if(x>=0){
//             printf("true\n");
//         }else
//         {
//             printf("false\n");
//         }
        
//     }
//     return 0;
// }
// #include <stdio.h>

// int main() {
//     long long X, Y;
//     scanf("%lld %lld", &X, &Y);
//     printf("%lld + %lld = %lld\n", X, Y, X + Y);
//     printf("%lld * %lld = %lld\n", X, Y, X * Y);
//     printf("%lld - %lld = %lld\n", X, Y, X - Y);
//     return 0;
// }
// #include <stdio.h>

// int main() {
//     long long int a,b,c,d;
//     scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
//     long long int x;
//     x=(a*b)-(c*d);
//     printf("Difference = %lld",x);

//     return 0;
// }
#include <stdio.h>

int main() {
    double pi=3.1415;
    double r;
    scanf("%lf",&r);
    double area=pi*r*r;
    printf("%lf",area);
    return 0;
}