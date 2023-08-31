#include <stdio.h>
#include <string.h>

int main() {
const int MAX_SIZE = 100;
int n;
scanf("%d", &n);
    char strings[MAX_SIZE][101];
    for (int i = 0; i < n; ++i) {
    scanf("%s", strings[i]);
                            }
    for (int i = 0; i < n; ++i) {
    if (strings[i][0] != '\0') {
    for (int j = i + 1; j < n; ++j) {
    if (strcmp(strings[i], strings[j]) == 0) {
    strings[j][0] = '\0';
                     }
                 }
              }
          }
    printf("Updated array:");
    for (int i = 0; i < n; ++i) {
    if (strings[i][0] != '\0') {                                                    
      printf(" %s", strings[i]);
     }
    }
    printf("\n");
 return 0;
}
