#include <stdio.h>
int main() {
    int i, j, spaces;
    char ch = 'P'; 
    for(i = 4; i >= 1; i--) {
        for(spaces = 1; spaces < (4 - i) + 2; spaces++) {
            printf(" ");
        }
        for(j = 1; j <= i; j++) {
            if (ch <= 'Y') {
                printf("%c ", ch);
                ch++;
            }
        }
         printf("\n");
    }
    char sh = 'O'; 
    for(i = 1; i <= 5 ; i++) {
        for(spaces = 1; spaces <= 5 - i; spaces++) {
            printf(" ");
        }
        for(j = 1; j <= i; j++) {
            if (sh >= 'A') {
                printf("%c ", sh);
                sh--;
            }
        }
        printf("\n");
    }
    return 0;   
}
