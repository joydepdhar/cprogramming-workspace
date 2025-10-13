// #include <stdio.h>

// int main() {
//     int x=10;
//     int y=x++;
//     int z=++y;
//     printf("%d",z++);
//     return 0;
// }
// #include <stdio.h>

// int main() {
//     int x=10;
//     ++x;
//     printf("%d",++x);
//     return 0;
// }
#include <stdio.h>

int main() {
    // for(int i=0;i<=10;i++){
    //     printf("hi ");
    //     if(i>2){
    //         break;
    //     }
    // }
    // int i=-3,count=0;
    // while (i<0)
    // {
    //     for(int j=0;j<5;j++){
    //         printf("# \n");
    //         count++;
    //     }
    //     i--;
    // }
    // printf("%d",count);
    int count=0;
    for(int i=0;i<=10;i++){
        if(i>2)
        {
            continue;
        }
        printf("HI ");
        count++;
    }
    printf("%d",count);
    return 0;
}