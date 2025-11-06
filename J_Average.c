#include <stdio.h>

double average(double arr[], int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum / n;
}

int main() {
    int n;
    scanf("%d", &n);

    double arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%lf", &arr[i]);
    }

    double res = average(arr, n);
    printf("%.7lf\n", res);

    return 0;
}
