#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    char first[1000],second[1000];
    scanf("%s%s",first,second);

    int x,y;
    scanf("%d%d",&x,&y);
    
    char superarr[2000];
    int i,j;
    for (i=0;first[i]!='\0';i++) {
        superarr[i]=first[i];
    }
    for (j=x;j<=y&&second[j]!='\0';j++) {
        superarr[i++]=second[j];
    }
    superarr[i] = '\0';
    printf("%s\n",superarr);
    return 0;;
}