#include <stdio.h>

int main() {
    long long X, Y;
    scanf("%lld %lld", &X, &Y);

    long long max_distance = X * 5;

    if (max_distance >= Y)
        printf("YES");
    else
        printf("NO");

    return 0;
}

