#include <stdio.h>

void swap(float *a, float *b) {
    float temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(float arr[], int n) {
    int maxIterations = 2;  
    for (int i = 0; i < n - 1 && i < maxIterations; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
        printf("After iteration %d:", i + 1);
        for (int k = 0; k < n; k++) {
            printf(" %.2f", arr[k]);
        }
        printf("\n");
    }
    printf("Sorted array:");
    for (int i = 0; i < n; i++) {
        printf(" %.2f", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);

    float arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }

    bubbleSort(arr, n);

    return 0;
}
