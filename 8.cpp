#include <stdio.h>

int main() {
    long long X;
    scanf("%lld", &X);

    long long total_cost = 4 * X; // cost for 4 friends

    if (total_cost <= 1000)
        printf("YES");
    else
        printf("NO");

    return 0;
}

