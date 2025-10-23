#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while(T--) {
        int M1, M2, D;
        scanf("%d %d %d", &M1, &M2, &D);
        int total_work = M1 * D;
        double new_days = (double)total_work / (M1 + M2);
        int fewer_days = D - (int)new_days;                

        printf("%d\n", fewer_days);
    }

    return 0;
}
