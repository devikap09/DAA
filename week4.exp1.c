#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    long long ways[n + 1];
    ways[0] = 1;

    for (int i = 1; i <= n; i++) {
        ways[i] = ways[i - 1];

        if (i >= 3) {
            ways[i] += ways[i - 3];
        }
    }

    printf("%lld", ways[n]);
    return 0;
}
