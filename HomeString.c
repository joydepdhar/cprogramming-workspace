//level 01
#include <stdio.h>

int main() {
    char a[20];
    // scanf("%c",&a);
    // for(int i=0;a[i]!='\0';i++){
    //     scanf("%c",&a[i]);
    // }
    // // printf("%c",a);
    // for(int i=0;a[i]!='\0';i++){
    //     printf("%c",a[i]);
    // }
    // fgets(a,20,stdin); // more usefull 
    // gets(a);
    // printf("%s",a);
    // string length
    // fgets(a,20,stdin);
    gets(a);
    int sz=strlen(a);
    // int sz=0;
    // for(int i=0;a[i]!='\0';i++){
    //     sz++;
    // }
    // printf("%d\n",sz);
    // for(int i=sz-1;i>=0;i--){
    //     printf("%c ",a[i]);
    // }
    // return 0;
    if(a[0]==a[sz-1]){
        printf("Same");
    }else{
        printf("Not Same");
    }
}