#include <stdio.h>

int upperBound(int arr[], int length, int value) {
    int low = 0, high = length;

    while (low < high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] <= value) {
            low = mid + 1;
        } else {
            high = mid;
        }
    }

    return low;
}

int main() {
    int n;
    scanf("%d", &n);

    int tails[n];
    int length = 0;

    for (int i = 0; i < n; i++) {
        int value;
        scanf("%d", &value);

        int position = upperBound(tails, length, value);
        tails[position] = value;

        if (position == length) {
            length++;
        }
    }

    printf("%d", length);

    return 0;
}
