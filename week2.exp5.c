#include <stdio.h>
#include <stdlib.h>

int ascending(const void *a, const void *b) {
    int x = *(const int *)a;
    int y = *(const int *)b;
    return (x > y) - (x < y);
}

int descending(const void *a, const void *b) {
    int x = *(const int *)a;
    int y = *(const int *)b;
    return (y > x) - (y < x);
}

int main() {
    int n;
    scanf("%d", &n);

    int arrayOne[n], arrayTwo[n];
    long long minimumSum = 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &arrayOne[i]);
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &arrayTwo[i]);
    }

    qsort(arrayOne, n, sizeof(int), ascending);
    qsort(arrayTwo, n, sizeof(int), descending);

    for (int i = 0; i < n; i++) {
        minimumSum += (long long)arrayOne[i] * arrayTwo[i];
    }

    printf("%lld", minimumSum);

    return 0;
}
