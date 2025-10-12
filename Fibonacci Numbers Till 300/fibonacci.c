#include <stdio.h>
int main() {
    int a = 1, b = 1, plus;

    printf("%d ", a);
    printf("%d ", b);

    while (1) {
        plus = a + b;
        a = b;
        b = plus;

        printf("%d ", plus);

        if (plus >= 300) 
            break;
    }

    return 0;
}
