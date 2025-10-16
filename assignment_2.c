// // #include <stdio.h>

// // int main() {
// //     long long int n;
// //     scanf("%lld",&n);
// //     for(int i=1;i<=n;i++){
// //         printf("%lld. I Want More Assignments\n",i);
// //     }
// //     return 0;
// // }
// #include <stdio.h>

// int main() {
//     long long int n;
//     scanf("%lld",&n);
//     if(n>0){
//         for(int i=1;i<=n;i++){
//             printf("%d ",i);
//         }
//     }else{
//         for (int i = n; i <= 0; i++)
//         {
//             printf("%d ",i);
//         }
//     }
//     return 0;
// }
// #include <stdio.h>

// int main() {
//     long long int n;
//     scanf("%lld",&n);
//     long long int num[n];
//     for(int i=0;i<n;i++){
//         scanf("%lld",&num[i]);
//     }
//     long long int ev=0,od=0;
//     for(int i=0;i<n;i++){
//         if(num[i]>=0){
//             ev=ev+num[i];
//         }else{
//             od=od+num[i];
//         }
//     }
//     printf("%lld %lld",ev,od);
//     return 0;
// }
// #include <stdio.h>

// int main() {
//     long long int n,v,x;
//     scanf("%lld",&n);
//     long long int num[n];
//     for(int i=0;i<n;i++){
//         scanf("%lld",&num[i]);
//     }
//     scanf("%lld %lld",&x,&v);
//     for(int i=0;i<n;i++){
//         if(i==x){
//             num[i]=v;
//         }
//     }
//     for(int i=0;i<n/2;i++){
//         long long int temp=num[i];
//         num[i]=num[n-i-1];
//         num[n-i-1]=temp;
//     }
//     for(int i=0;i<n;i++){
//         printf("%lld ",num[i]);
//     }
//     return 0;
// }
#include <stdio.h>

int main() {
    long long int n,v,x;
    scanf("%lld",&n);
    long long int num[n];
    for(int i=0;i<n;i++){
        scanf("%lld",&num[i]);
    }
    for (int i=n-1;i>=0;i--) {
        if (i%2==1) {
            printf("%d ",num[i]);
        }
    }
    return 0;
}