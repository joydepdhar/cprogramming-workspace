// // Palindrome check
// #include <stdio.h>
// #include <string.h>

// int main() {
//     char a[1000];
//     fgets(a,1001,stdin);
//     int sz=strlen(a);
//     if(a[sz - 1] == '\n') {
//         a[sz - 1] = '\0';
//         sz--;
//     }

//     int flag=0;
//     for(int i=0;i<sz-1/2;i++){
//         if(a[i]!=a[sz-1-i]){
//             flag=1;
//             break;
//         }
//     }
//     if(flag==0){
//         printf("Yes");
        
//     }else{
//         printf("No");
//     }
//     return 0;
// }
// Count vowels and consonants
// #include <stdio.h>
// #include <string.h>
// int main() {
//     char a[1000];
//     fgets(a,1001,stdin);
//     char vo[5]={'a','e','i','o','u'};
//     int sz=strlen(a);
//     if(a[sz - 1] == '\n') {
//         a[sz - 1] = '\0';
//         sz--;
//     }
//     int vw=0,conso=0;
//     for(int i=0;i<sz;i++){
//         if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'){
//             vw++;
//         }else{
//             conso++;
//         }
        
//     }
//     printf("%d %d",vw,conso);
//     return 0;
// }
// // String copy manually
// #include <stdio.h>
// #include<string.h>
// int main() {
//     char a[1000],b[1000];
//     fgets(a,1001,stdin);
//     int sz=strlen(a);
//     if(a[sz - 1] == '\n') {
//         a[sz - 1] = '\0';
//         sz--;
//     }
//     for(int i=0;i<sz;i++){
//         b[i]=a[i];
//     }
//     printf("%s",b);
//     return 0;
// }
// #include <stdio.h>
// #include <string.h>

// int main() {
//     char str1[1000], str2[1000];
//     fgets(str1, 1001, stdin);
//     fgets(str2, 1001, stdin);

//     int len1 = strlen(str1);
//     int len2 = strlen(str2);

//     if (str1[len1 - 1] == '\n') {
//         str1[len1 - 1] = '\0';
//         len1--;
//     }
//     if (str2[len2 - 1] == '\n') {
//         str2[len2 - 1] = '\0';
//         len2--;
//     }

//     int flag = 0;
//     if (len1 != len2) {
//         flag = 1;  // different lengths → not equal
//     } else {
//         for (int i = 0; i < len1; i++) {
//             if (str1[i] != str2[i]) {
//                 flag = 1;
//                 break;
//             }
//         }
//     }

//     if (flag == 0)
//         printf("Equal\n");
//     else
//         printf("Not Equal\n");

//     return 0;
// }
