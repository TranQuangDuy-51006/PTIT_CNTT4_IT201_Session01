#include <stdio.h>

int main(void) {
    int arr[] = { 1, 2, 4, 2, 5, 5, 7, 4, 2, 4, 6, 9, 4, 4};
    int n = sizeof(arr)/sizeof(arr[0]);

    int maxCount = 0;
    int num;
    for (int i = 0; i < n; i++) {
        int  count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            num = arr[i];
        }
    }
    printf("phan tu xuat hien nhieu nhat trong mang la %d ( %d lan)", num, maxCount);
    return 0;
}