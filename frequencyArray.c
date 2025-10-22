#include <stdio.h>

int main() {
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int fre[m];
    for (int i = 0; i < m; i++) fre[i] = 0; 
    for(int i=0;i<n;i++){
        int val=a[i];
        fre[val]++;
    }
    for(int i=0;i<m;i++){
        printf("%d %d \n",i, fre[i]);
    }
    return 0;
}
// #include <stdio.h>

// int main() {
//     int n, m;
//     scanf("%d %d", &n, &m);
    
//     int a[n];
//     for (int i = 0; i < n; i++) {
//         scanf("%d", &a[i]);
//     }

//     int fre[m];
//     for (int i = 0; i < m; i++) fre[i] = 0;  // initialize manually for safety

//     for (int i = 0; i < n; i++) {
//         int val = a[i];
//         if (val >= 0 && val < m) {  // ✅ bounds check
//             fre[val]++;
//         }
//     }
//     printf("Output");
//     for (int i = 0; i < m; i++) {
//         printf("%d %d \n",i, fre[i]);
//     }

//     return 0;
// }
