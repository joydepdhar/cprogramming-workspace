// #include <stdio.h>

// int main() {
//     // int n;
//     // scanf("%d",&n);
//     char name[6];
//     for(int i=0;i<=5;i++){
//         scanf("%c",&name[i]);
//     }
//     for(int i=0;i<=5;i++){
//         printf("%c ",name[i]);
//     }
//     return 0;
// }
// input in string
#include <stdio.h>

int main() {
    char a[10];
    scanf("%s",&a);
    printf("%s\n",a);
    printf("%d",a[5]);
    return 0;
}