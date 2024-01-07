#include <stdio.h>

int main() {
    int a[10] = {0, 1, 1, 1, 0, 1, 0, 0, 1, 0};
    int low = 0;
    int high = 9;

    while (low <= high) {
        switch (a[low]) {
            case 0:
                low++;
                break;
            case 1:
                if (a[high] == 0) {
                    // Swap a[low] and a[high]
                    int temp = a[low];
                    a[low] = a[high];
                    a[high] = temp;
                }
                high--;
                break;
            default:
                break;
        }
    }
    for (int i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
