#include <stdio.h>

int main() {
    char sentence[100001];
    fgets(sentence,100001,stdin);
    int sz=strlen(sentence);
    for(int i=0;i<sz;i++){
        if(sentence[i]>='a'&& sentence[i]<='z'){
            sentence[i]=sentence[i]-32;
        }
        else if(sentence[i]>='A' && sentence[i]<='Z'){
            sentence[i]=sentence[i]+32;
        }else if(sentence[i] == ','){
            sentence[i] = ' ';
        }
    }
    printf("%s",sentence);
    return 0;
}