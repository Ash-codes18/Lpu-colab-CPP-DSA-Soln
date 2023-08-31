#include <stdio.h>

int main() {
        int n, m;
        scanf("%d", &n);
        int arr1[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr1[i]);
    }
        scanf("%d", &m);
        int arr2[m];
    for (int i = 0; i < m; ++i) {
        scanf("%d", &arr2[i]);
    }
        int max_size = (n > m) ? n : m;
        int merged[max_size];
    for (int i = 0; i < max_size; ++i) {
        int num1 = (i < n) ? arr1[i] : 0;
        int num2 = (i < m) ? arr2[i] : 0;
    merged[i] = num1 + num2;
}
    for (int i = max_size - 1; i >= 0; --i) {
        printf("%d", merged[i]);
    if (i > 0) {
        printf(" ");
    }
                                                }
        printf("\n");
 return 0;
}

//sushant
