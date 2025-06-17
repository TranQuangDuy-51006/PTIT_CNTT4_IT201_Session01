#include <stdio.h>
#include <stdlib.h>

int sumN(int n) {
    int* arr = (int*)malloc(n*sizeof(int));
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    free(arr);
    return sum;
}

int main(void) {
    //cách 1: do phuc tap khong gian O(1)
    int n = 20;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += i;
    }
    printf("sum = %d\n", sum);
    //cách 2: do phuc tap khong gian O(n)
    sum = sumN(n);
    printf("sum = %d\n", sum);

    return 0;
}