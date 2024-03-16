#include <stdio.h>

int main() {
    int i, num;
    float sum = 0.0, avg;

    printf("Input the 3 numbers :\n");
    for(i = 1; i <= 3; i++) {
        printf("Number-%d :", i);
        scanf("%d", &num);
        sum += num;
    }

    avg = sum / 3;
    printf("The sum of 3 no is : %.2f\n", sum);
    printf("The Average is : %.6f\n", avg);

    return 0;
}

