#include <stdio.h>

int main() {
    int n;
    char ch;

    printf("Enter lines: ");
    scanf("%d", &n);

    printf("Enter character: ");
    scanf(" %c", &ch);

    if ((ch >= 'a' && ch <= 'z') || 
        (ch >= 'A' && ch <= 'Z') || 
        (ch >= '0' && ch <= '9')) {

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n - i; j++) {
                printf(" ");
            }
            for (int k = 1; k <= (2 * i - 1); k++) {
                printf("%c", ch);
            }
            printf("\n");
        }

    } else {
        printf("Invalid");
    }

    return 0;
}
