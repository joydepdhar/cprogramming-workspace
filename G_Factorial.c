#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    while(T--) {
        int N;
        scanf("%d", &N);
        long long int factorial = 1;
        for(int i = 1; i <= N; i++){
            factorial *= i;
        }
        printf("%lld\n", factorial);
    }
    return 0;
}
