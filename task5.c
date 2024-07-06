#include <stdio.h>
#include <string.h>
#include <math.h>

unsigned long long count(int n) {
    if (n == 0) return 1;
    if (n == 1) return 2;

    unsigned long long dp[n+1][3];
    
    dp[1][0] = 1;
    dp[1][1] = 1;
    dp[1][2] = 0;

    for (int i = 2; i <= n; i++) {
        dp[i][0] = dp[i-1][0] + dp[i-1][1] + dp[i-1][2];
        dp[i][1] = dp[i-1][0];
        dp[i][2] = dp[i-1][1];
    }

    return dp[n][0] + dp[n][1] + dp[n][2];
}

void combine(char* combi, int pos, int len) {
    if (pos == len) {
        int valid = 1;
        for (int i = 0; i < len - 2; ++i) {
            if (combi[i] == '1'&& combi[i+1] == '1' && combi[i+2] == '1') {
                valid = 0;
                break;
            }
        }
        if (valid) {
            combi[len] = '\0';
            printf("%s\n", combi);
        }
        return;
    }

    combi[pos] = '1';
    combine(combi, pos + 1, len);

    combi[pos] = '0';
    combine(combi, pos + 1, len);
}

int main() {
    while (1 > 0) {
        int n = 0;
        printf("Введіть довжину послідовностей (≤ 10000): ");
        scanf("%d", &n);

        if (n < 1 || n > 10000) {
            printf("Введена некоректна довжина. Спробуйте ще раз. \n\n");
        }
        else {   
            char combi[n + 1];
            if (n <= 15) {
                combine(combi, 0, n);
            }
            printf("\nКількість послідовностей: %llu", count(n));
            return 0;
        }
    }
}