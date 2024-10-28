#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    if (n <= 1) {
        printf("%d is not prime\n", n);
    } else if (n == 2) {
        printf("%d is prime\n", n);
    } else {
        int flag = 1;
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                flag = 0;
                break;
            }
        }
        if (flag) {
            printf("%d is prime\n", n);
        } else {
            printf("%d is not prime\n", n);
        }
    }
    return 0;
}

