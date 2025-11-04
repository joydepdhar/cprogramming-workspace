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
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        for (int j = 0; j < 2 * (n - i) - 1; j++) {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}
