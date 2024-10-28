#include <stdio.h>

int main() {
    int n,i;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Part a: ");
    for( i = n; i >= 0; i--) {
        printf("%d ", i);
    }
    printf("\n");
    printf("Part b: ");
    for( i = 1; i <= n; i++) {
        if(i % 10 != 4 && i % 10 != 7) {
            printf("%d ", i);
        }
    }
    float inc,j;
    printf("\n");
    printf("Part c: ");
    printf("Enter an increment value less than 1: ");
    scanf("%f", &inc);
    if(inc > 1.0) {
        printf("Error the loop ends here\n");
    } else {
        for( j= 0; j <= n; j += inc) {
            printf("%.2f ", j);
        }
    }
    printf("\n");
    return 0;
}
