#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    int x = *(const int *)a;
    int y = *(const int *)b;
    return (x > y) - (x < y);
}

int main() {
    int n, m;
    scanf("%d", &n);
    
    int greed[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &greed[i]);
    }
    
    scanf("%d", &m);
    
    int cookies[m];
    for (int i = 0; i < m; i++) {
        scanf("%d", &cookies[i]);
    }
    
    qsort(greed, n, sizeof(int), compare);
    qsort(cookies, m, sizeof(int), compare);
    
    int child = 0, cookie = 0, content = 0;
    
    while (child < n && cookie < m) {
        if (cookies[cookie] >= greed[child]) {
            content++;
            child++;
        }
        cookie++;
    }
    
    printf("%d", content);
    return 0;
}
