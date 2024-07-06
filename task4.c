#include <stdio.h>

int main () {
    while (1 > 0) {
        int n = 0, count = 0;
        printf("Введіть натуральне число n: ");

        scanf("%d", &n);
        if (n < 1 || n >= 150) {
            printf("Введене число не входить в діапазон або не є натуральним. Спробуйте ще раз. \n\n");
        }
        else {
            for (int m = 1; m < n; m++) {
                if (n / m == n % m) {
                    printf("%d - рівний дільник числа %d\n", m, n);
                    count++;
                }
            }
            printf("Кількість рівних дільників числа %d - %d шт.\n\n", n, count);
        } 
    }
}