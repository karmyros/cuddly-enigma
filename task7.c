#include <stdio.h>
#include <math.h> 

int main() {
    int x1, y1, r1, x2, y2, r2;
    int count = 0;

    printf("Введіть координати центрів і радіуси кіл послідовно через пробіл(x1 y1 r1 x2 y2 r2): ");
    scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);

    int dx = x2 - x1;
    int dy = y2 - y1;

    float distance = sqrt(pow(dx, 2) + pow(dy, 2));

    if (distance == 0 && r1 == r2) {
        count = -1;
    } else if (distance > r1 + r2 || distance < fabs(r1 - r2)) {
        count = 0;
    } else if (distance == r1 + r2 || distance == fabs(r1 - r2)) {
        count = 1;
    } else {
        count = 2;

    printf("Кількість точок перетину: %d\n", count);
    return 0;
}