
#include <stdlib.h>
#include <stdio.h>

int nsd(int a, int b) {
    while (b > 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int nsk(int a, int b) {
    return a * (b / nsd(a, b));
}

int nskArr (int nums[], int p) {
    int result = nums[0];
    for (int i = 1; i < p; i++) {
        result = nsk(result, nums[i]);
    }
    return result;
}

int main () {
    while (1 > 0) {
        int p = 0, isNat = 1;
        char tempChr;

        printf("Введіть кількість чисел(2-20), для яких буде знайдено НСК: ");
        scanf("%d", &p);

        if (p < 2 || p > 20) {
            printf("Кількість не входить у задані межі. Спробуйте ще раз. \n\n");
            scanf("%c", tempChr);
        } else {
            int numbers[p];
            long long int nsk = 1;

            printf("Введіть ваші натуральні числа (%d шт, більших за 0): ", p);
            for (int i = 0; i < p; i++) {
                scanf("%d", &numbers[i]);
                if (numbers[i] <= 0) {
                    isNat = 0;
                }
            }

            if (isNat == 0) {
                printf("Деякі з отриманих чисел не натуральні. Спробуйте ще раз.\n\n");
                scanf("%c", tempChr);
            } else {
                nsk = nskArr(numbers, p);
                printf("НСК введених чисел дорівнює %lld", nsk);
                return 0;
            }
        }
    }   
}
