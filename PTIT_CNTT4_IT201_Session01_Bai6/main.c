#include <stdio.h>

int main(void) {
    int arr[] = {5, 4, 3, 7, 3, 2, 3, 9, 1, 4};
    int len = sizeof(arr)/sizeof(arr[0]);
    int num;
    int count = 0;
    scanf("%d", &num);
    for (int i = 0; i < len; i++) {
        if (arr[i] == num) {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}

//do phuc tap thoi gian O(n)

//do phuc tap khong gian O(1)