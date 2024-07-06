#include <stdio.h>
#include <math.h> 

int main () {
    int x1 = 0, y1 = 0, x2 = 0, y2 = 0;

    printf("Введіть координати вектора послідовно через пробіл(x1 y1 x2 y2): ");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    int dx = x2 - x1;
    int dy = y2 - y1;

    float length = sqrt((pow(dx, 2) + pow(dy, 2)));
    printf("\nДовжина введеного вектора становить %.6f", length);
}

