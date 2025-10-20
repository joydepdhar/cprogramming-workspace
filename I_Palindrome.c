#include <stdio.h>

int main() {
    char a[1001];
    scanf("%s",&a);
    int flag=0;
    int n=strlen(a);
    for(int i=0;i<=n/2;i++){
        if(a[i]!=a[n-1-i]){
            flag=1;
        }
    }
    if(flag==0){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}