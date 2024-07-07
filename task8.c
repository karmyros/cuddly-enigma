#include <stdio.h>
#include <string.h>

int findFact(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    while (1 > 0) {
        char word[15];
        printf("Введіть слово англійською: ");
        scanf("%s", word);

        if (strlen(word) > 14) {
            printf("Слово завелике. Спробуйте ще раз.\n");
        } else {
            int len = strlen(word);
            int anaCount;
            int factorial = findFact(len);

            int charCount[256] = {0};

            for (int i = 0; i < len; i++) {
                charCount[(int)word[i]]++;
            }

            int factorials = 1;
            for (int i = 0; i < 256; i++) {
                if (charCount[i] > 1) {
                    factorials *= findFact(charCount[i]);
                }
            }

            anaCount = factorial / factorials;
            printf("Кількість анаграм: %d\n\n", anaCount);
        }
    }
    return 0;
}
