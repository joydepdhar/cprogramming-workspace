#include <stdio.h>
int countingVowels(char arr[],int i){
    if(arr[i]=='\0'){
        return 0;
    }
    int cnt=countingVowels(arr,i+1);
    if(arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u'||arr[i]=='A'||arr[i]=='E'||arr[i]=='I'||arr[i]=='O'||arr[i]=='U'){
        return cnt+1;
    }
    return cnt;
    
}
int main() {
    char arr[200];
    fgets(arr,201,stdin);
    int count=countingVowels(arr,0);
    printf("%d",count);
    return 0;
}