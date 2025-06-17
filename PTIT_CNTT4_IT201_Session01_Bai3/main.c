#include <stdio.h>
#include <stdlib.h>

int* mallocArray(int n) {
    int* arr = (int*)malloc(n* sizeof(int));
    for (int i =0; i < n; i++) {
        arr[i] = i;
    }
    return arr;
}

int main(void) {
    mallocArray(10);
    return 0;
}

// độ phức tạp khong gian : O(n)