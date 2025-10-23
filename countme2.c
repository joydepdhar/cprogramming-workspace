#include <stdio.h>

int main() {
    char arr[100001];
    gets(arr);
    int countConso=0;
    for(int i=0;arr[i]!='\0';i++){
        if(arr[i]!='a'&&arr[i]!='e'&&arr[i]!='i'&&arr[i]!='o'&&arr[i]!='u'){
            countConso++;
        }
    }
    printf("%d",countConso);
    return 0;
}