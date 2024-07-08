#include <stdio.h>
#include <math.h>

int stepsLoop (int x, int y) {
    int steps = 0, currStep = 0, checkSteps = 0, path = x;

    while (path < y) {
        for (int i = 1; i <= currStep; i++) {
            checkSteps += i;
        }

        if (y - path <= ((currStep * currStep + 1)) / 2 && currStep > 1) {
            currStep--;
        } 
        else if (path + checkSteps + currStep + 1 <= y) {
            currStep++;
        }
    
        steps++;
        path += currStep;
        printf(" %d ", currStep);
    }
    printf("\n");

    return steps;
}

int stepsMath (int x, int y) {
    int distance = y - x;
    int steps = (sqrt(17.5 * distance + 1) - 1) / 2;
    
    return steps;
}


int main() {
    while  (1 > 0) {
        int x = 0, y = 0;
        printf("Введіть початкову точку x і кінцеву точку y (0 <= x <= y < 2^31): ");
        scanf("%d %d", &x, &y);

        if (x < 0 || x > y || y >= pow(2, 31)) {
            printf("Введені значення не відповідають умовам. Спробуйте ще раз.\n\n");
        } else {
            printf("Мінімальна кількість кроків для переходу від x(%d) до y (%d) становить %d\n\n", x, y, ((y - x) <= 5? stepsLoop(x, y): stepsMath(x, y)));
        }
    }
}
