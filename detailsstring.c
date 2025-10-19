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
// #include <stdio.h>

// int main() {
//     char a[10];
//     scanf("%s",&a);
//     printf("%s\n",a);
//     printf("%d",a[5]);
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     char a[15];
//     // gets(a);
//     // fgets(s,size,stdin)
//     fgets(a,12,stdin);
//     printf("%s",a);
//     return 0;
// }

// //string initiaze
// #include <stdio.h>
// //null charactor must have bro or increase the arrary size
// int main() {
//     // char a[5]={'A','B','C','D'};
//     char superstring[20]="Welcome to string";
//     printf("%s",superstring);
//     // printf("%s",a);
//     return 0;
// }

// length of the string

// #include <stdio.h>

// int main() {
//     char a[100];
//     scanf("%s",&a);
//     int count=0;
//     for(int i=0;a[i] != '\0';i++){
//         count++;
//     }
//     printf("%d",count);
//     return 0;
// }

#include <stdio.h>
#include<string.h>
int main() {
    // char s[100];
    // scanf("%s",s);
    // int sz=strlen(s);
    // printf("%d",sz);
    char str[20];
    scanf("%c",&str);
    printf("%s",str);
    return 0;
}