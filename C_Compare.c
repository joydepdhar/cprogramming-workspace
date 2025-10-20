#include <stdio.h>

int main() {
    char a[1001], b[1001];
    scanf("%s %s", a, b);

    int i = 0;
    while (a[i] != '\0' && b[i] != '\0' && a[i] == b[i]) {
        i++;
    }

    if (a[i] < b[i]) {
        printf("%s", a);
    } else {
        printf("%s", b);
    }

    return 0;
}
