//1.  Even or odd

// #include<stdio.h>
// int main(){
//     int number;
//     scanf("%d",&number);
//     if(number%2==0){
//         printf("Even \n");
//     }else{
//         printf("Odd \n");
//     }
//     return 0;
// }
// 2. Max of two Numbers
// #include<stdio.h>
// int main(){
//     int a, b;
//     scanf("%d %d",&a,&b);
//     if(a>b){
//         printf("%d is greater....\n",a);
//     }else{
//         printf("%d is greater.....\n",b);
//     }
// }
// // Positive, Negative, or Zero
// #include<stdio.h>
// int main(){
//     int a;
//     scanf("%d",&a);

//     if(a>=0){
//         if(a>0){
//             printf("Positive");
//         }else{
//             printf("Zero");
//         }
//     }else{
//         printf("Negative");
//     }
//     return 0;
// }
// Sum of 1 to N
// #include<stdio.h>
// int main(){
//     int a,sum=0;
//     scanf("%d",&a);

//     for(int i=1;i<=a;i++){
//         sum=sum+i;
//     }
//     printf("sum is %d \n",sum);

// }
// // Factorial of N
// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     int factorial=1;
//     for(int i=n;i>0;i--){
//         factorial=factorial*i;
//     }
//     printf("%d",factorial);
// }
// // Print N to 1
// #include<stdio.h>
// int main(){
//     int n;
//     scanf("%d",&n);
//     for(int i=n;i>0;i--){
//         printf("%d",i);
//     }
// }
// Sum of Even Numbers up to N
// #include<stdio.h>
// int main(){
//     int n,sum=0;
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         if(i%2==0){
//             sum=sum+i;
//         }
//     }
//     printf("%d",sum);
// }
// Sum of Digit
// #include<stdio.h>
// int main(){
//     int x,sum=0;
//     scanf("%d",&x);
//     while(x !=0){
//         int digit=x%10;
//         sum=sum+digit;
//         x=x/10;
//     }
//     printf("%d",sum);
//     return 0;
// }

// Reverse Number
// #include<stdio.h>
// int main(){
//     int x, rev=0;
//     scanf("%d",&x);
//     while(x!=0){
//         int digit=x%10;
//         rev=rev*10+digit;
//         x=x/10;
//     }
//     printf("%d",rev);
// }
// Count Digits in a Number
// #include<stdio.h>
// int main(){
//     int x, rev=0;
//     scanf("%d",&x);
//     while(x!=0){
//         int digit=x%10;
//         rev++;
//         x=x/10;
//     }
//     printf("%d",rev);
// }