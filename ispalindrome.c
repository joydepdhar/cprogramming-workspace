#include <stdio.h>
#include<string.h>
int is_palindrome(char str[1001]){
    int len = strlen(str);

        for (int i = 0; i < len / 2; i++) {
            if (str[i] != str[len - i - 1]) {
                return 0;
            }
        }
        return 1;
}
int main() {
    char str[1001];
    scanf("%s",&str);
    // printf("%s",str);
    int res=is_palindrome(str);
    if(res==1){
        printf("Palindrome");
    }else{
        printf("Not Palindrome");
    }
    return 0;
}