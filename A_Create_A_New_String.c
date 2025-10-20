#include <stdio.h>

int main() {
    char a[1000];
    char b[1000];
    scanf("%s",&a);
    scanf("%s",&b);
    int lenA = strlen(a);
    int lenB=strlen(b);
    printf("%d %d\n",lenA,lenB);
    printf("%s %s",a,b);

    return 0;
}