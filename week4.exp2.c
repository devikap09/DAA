#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    long long board[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%lld", &board[i][j]);
        }
    }
    
    for (int i = 1; i < n; i++) {
        board[i][0] += board[i - 1][0];
    }
    
    for (int j = 1; j < n; j++) {
        board[0][j] += board[0][j - 1];
    }
    
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            if (board[i - 1][j] > board[i][j - 1]) {
                board[i][j] += board[i - 1][j];
            } else {
                board[i][j] += board[i][j - 1];
            }
        }
    }
    
    printf("%lld", board[n - 1][n - 1]);
    return 0;
}
