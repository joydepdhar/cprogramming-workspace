#include <stdio.h>

int main() {
    char a[101],b[101];

    scanf("%s%s",a,b);
    int sza=strlen(a);
    int szb=strlen(b);
    // for(int i=0;i<szb;i++){
    //     a[sza+i]=b[i];
    // }
    printf("%s ",a);
    return 0;
}