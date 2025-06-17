#include <stdio.h>

int main(void) {
    int arr[] = {5, 3, 7, 9, 2, 3};
    int leng = sizeof(arr) / sizeof(arr[0]);
    int check = 0;

    // cach 1: do phuc tap thoi gian O(n^2), do phuc tap khong gian O(1)
    for (int i = 0; i < leng; i++) {
        for (int j = i + 1; j < leng; j++) {
            if (arr[i] == arr[j]) {
                check = 1;
                break;
            }
        }
        if (check == 1) {
            break;
        }
    }

    if (check == 1) {
        printf("Co phan tu trung lap.\n");
    }else {
        printf("Khong co phan tu trung lap.\n");
    }


    //cach 2: do phuc tap thoi gian O(n), do phuc khong gian O(1)
    int freq[1001] = {0};
    check = 0;
    for (int i = 0; i < leng; i++) {
        if (freq[arr[i]] > 0) {
            check = 1;
            break;
        }
        freq[arr[i]]++;
    }

    if (check = 1) {
        printf("Co phan tu trung lap.\n");
    }else {
        printf("Khong co phan tu trung lap.\n");
    }

    return 0;
}