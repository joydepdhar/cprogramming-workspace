// #include <stdio.h>
// #include<string.h>
// int main() {
//     int n;
//     scanf("%d",&n);
//     getchar();
//     char arr[n+1];
//     for(int i=0;i<n;i++){
//         gets(arr[i]);
//     }
//     int upper = 0, lower = 0, digit = 0;

//     for (int i = 0; arr[i] != '\0'; i++) {
//         if(arr[i]>='A' && arr[i]<='Z'){
//             upper++;
//         }else if(arr[i]>='a' && arr[i]<='z'){
//             lower++;
//         }else if(arr[i]>='0' && arr[i]<='9'){
//             digit++;
//         }
//     }
//     printf("%d %d %d\n", upper, lower, digit);
//     return 0;
// }
#include <stdio.h>

int main() {
    int T ,upper = 0, lower = 0, digit = 0;;
    scanf("%d", &T);
    getchar();

    while(T--) {
        char arr[100001];
        fgets(arr, sizeof(arr), stdin);
        for (int i=0; arr[i]!='\0';i++) {
            if (arr[i] == '\n') {
                arr[i] = '\0';
                break;
            }
        }
        for (int i=0; arr[i] != '\0';i++) {
            if(arr[i]>='A' && arr[i]<='Z'){
                upper++;
            }else if(arr[i]>='a' && arr[i]<='z'){
                lower++;
            }else if(arr[i]>='0' && arr[i]<='9'){
                digit++;
            }
        }
        printf("%d %d %d\n", upper, lower, digit);
    }

    return 0;
}