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
    int i;
    for (int i=0;first[i]!='\0';i++) {
        superarr[i]=first[i];
    }
    int j;
    for (j=0;j<y&&second[x+j]!='\0';j++) {
        superarr[i+j]=second[x+j];
    }
    superarr[i + j] = '\0';
    printf("%s\n", superarr);
    return 0;;
}