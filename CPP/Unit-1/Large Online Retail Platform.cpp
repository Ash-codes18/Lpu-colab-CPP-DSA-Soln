#include <stdio.h>

int main() {
    int n, target;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    scanf("%d", &target);
    
    int index = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            index = i;
            break;
        }
    }
    
    if (index != -1) {
        printf("Element %d is present at index %d\n", target, index);
    } else {
        printf("Element %d is not present\n", target);
    }
    
    return 0;
}
