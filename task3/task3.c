#include <stdio.h>

int main() {
    int N;
    int population;
    int sum = 0, max = 0, min = 999999;

    printf("Enter the number of cities: ");
    scanf("%d", &N);
    for (int i = 1; i <= N; i++) {
        printf("Enter the population of city %d : ", i);
        scanf("%d", &population);
        sum += population;
        if (max < population) {
            max = population;
        }
        if (min > population) {
            min = population;
        }
    }
    printf("Mean population: %.2f\nMaximum population: %d\nMinimum population: %d\n", 
           (float)sum / N, max, min);

    return 0;
}
