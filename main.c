#include <stdlib.h>
#include <stdio.h>

int main () {
    while (1 > 0) {
        int t1 = 0, t2 = 0, t3 = 0;
        printf("Введіть три значення (< 10000): \n");
        scanf("%d %d %d", &t1, &t2, &t3);
        
        if ((t1 < 0) || (t2 < 0) || (t3 < 0)) {
            printf("\nЧас не може бути від'ємним. ");
        }
        else if ((t1 > 10000) || (t2 > 10000) || (t3 > 10000)) {
            printf("\nЧи дійсно можна їсти пиріг більше 10000 годин? ");
        }
        else {
            float average = (t1 + t2 + t3)/3;
            printf("\nЧас, необхідний для з'їдання пирога: %.2f годин", (average/3));
            return 0;
        }
    }
}