#include <stdio.h>

int main() {
    int i, n, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("The first %d natural numbers are:\n", n);

    for(i = 1; i <= n; i++) {
        printf("%d ", i);
        sum += i;
    }

    printf("\nThe Sum of Natural Number upto %d terms : %d\n", n, sum);

    return 0;
}
