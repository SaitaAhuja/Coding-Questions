#include <stdio.h>
int main(){
    int num;
    int table;
printf("Enter the number for it's table: ");
scanf("%d", &num);


for (int i = 1; i <= 10; i++){
	table = num * i;
printf("%d * %d = %d\n",num, i, table);
}
return 0;
}
