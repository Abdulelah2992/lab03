#include <stdio.h>

int main() {
    int x, y;
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 4; j++) {
            printf("(%d,%d)\t", i, j);
        }
        printf("\n");
    }
    printf("Enter your initial coordinate: ");
    scanf("%d%d", &x, &y);
    char position;
    do {
        if (x == 1 && y == 1 || x == 1 && y == 2 || x == 1 && y == 3 || x == 1 && y == 4 ||
            x == 2 && y == 1 || x == 2 && y == 4 || x == 3 && y == 1 || x == 3 && y == 4 ||
            x == 4 && y == 1 || x == 4 && y == 2 || x == 4 && y == 3 || x == 4 && y == 4) {
            break;
        }
        printf("Enter the new position ")

    return 0;
}

