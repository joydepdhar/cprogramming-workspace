#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int space = n - 1;
    int star = 1;

    // Top pyramid
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= space; j++)
            printf(" ");
        for (int j = 1; j <= star; j++)
            printf("*");
        printf("\n");
        space--;
        star += 2;
    }

    // Bottom pyramid (same as top, middle line repeated)
    space = n - 1;
    star = 2 * n - 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= space; j++)
            printf(" ");
        for (int j = 1; j <= star; j++)
            printf("*");
        printf("\n");
        space--;
    }

    return 0;
}
