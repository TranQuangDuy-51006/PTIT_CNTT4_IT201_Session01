#include <stdio.h>

void printDouble(int n) {
    int i = 1;
    while (i < n) {
        printf("%d\n", i);
        i *= 2;
    }
}

int main(void) {
    printDouble(10);
    return 0;
}

//độ phức tạp thời gian là : O(log n)