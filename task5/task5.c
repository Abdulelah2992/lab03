#include <stdio.h>

int main() {
    int E, A, I, O, U, others;
    E = A = I = O = U = others = 0;
    int n;
    char character;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter a character: ");
        getchar(); // Consume the newline character left by scanf
        scanf("%c", &character);

        if (character == 'e' || character == 'E') {
            E++;
        } else if (character == 'a' || character == 'A') {
            A++;
        } else if (character == 'i' || character == 'I') {
            I++;
        } else if (character == 'o' || character == 'O') {
            O++;
        } else if (character == 'u' || character == 'U') {
            U++;
        } else {
            others++;
        }
    }
    printf("\nFrequency of a = %d\n", A);
    printf("Frequency of e = %d\n", E);
    printf("Frequency of i = %d\n", I);
    printf("Frequency of o = %d\n", O);
    printf("Frequency of u = %d\n", U);
    printf("Frequency of others = %d\n", others);

    return 0;
}

