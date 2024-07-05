#include <stdio.h>
#include <string.h>
#include <math.h>

int count = 0;

void combine(char* combi, int pos, int len) {
    if (pos == len) {
        int valid = 1;
        for (int i = 0; i < len - 2; ++i) {
            if (combi[i] == combi[i+1] && combi[i+1] == combi[i+2]) {
                valid = 0;
                break;
            }
        }
        if (valid) {
            combi[len] = '\0';
            count++;
            printf("%s\n", combi);
        }
        return;
    }

    combi[pos] = '5';
    combine(combi, pos + 1, len);

    combi[pos] = '9';
    combine(combi, pos + 1, len);
}

int main() {
    while (1 > 0) {
        int p = 0;
        printf("Введіть кількість розрядів (≤ 30): ");
        scanf("%d", &p);

        if (p < 1 || p > 30) {
            printf("Введена некоректна кількість розрядів. Спробуйте ще раз. \n\n");
        }
        else {   
            char combi[p + 1];
            combine(combi, 0, p);
            printf("\nКількість чисел: %d", count);
            return 0;
        }
    }
}