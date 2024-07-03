#include <stdlib.h>
#include <stdio.h>

int main () {
    while (1 > 0) {
        int t1 = 0, t2 = 0, t3 = 0;
        printf("Введіть три значення (0 < x < 10000): \n");
        scanf("%d %d %d", &t1, &t2, &t3);

        if ((t1 < 0) || (t2 < 0) || (t3 < 0)) {
            printf("\nВведений час не може бути від'ємним. ");
        }
        else if ((t1 > 10000) || (t2 > 10000) || (t3 > 10000)) {
            printf("\nЧи дійсно можна їсти пиріг більше 10000 годин? ");
        }
        else {
            float average = (t1 + t2 + t3)/3;
            float hrs = average/3;

            printf("\nЧас, необхідний для з'їдання пирога: %.2f годин (або %.0f хвилин)", hrs, hrs*60);
            return 0;
        }
    }
}