#include <stdio.h>

void print(long long int x) {
    for (long long int i = 1; i <= x; i++) {
        printf("%lld ", i);
    }
}

int main() {
    long long int x;
    scanf("%lld", &x);
    print(x);
    return 0;
}
