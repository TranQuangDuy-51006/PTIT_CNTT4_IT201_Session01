#include <stdio.h>

int main(void) {
    int arr[] = {9, 2, 5, 3, 1, 8, 7, 13, 6, 10};

    for (int i = 9; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (arr[j] > arr[j + 1]) {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
    for (int i = 0; i < 10; i++) {
        printf("%d\n", arr[i]);
    }
    return 0;
}

// do phuc tap thoi gian O(n2)
// do phuc tap khong gian O(1)