#include <stdio.h>
int main() {
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num ; i++) {
    printf("%d is ", i);
	  if(i % 2 == 0){
      	printf("Even\n");  
	  }
	  else{
	  	printf("Odd\n");
	  }
	        
    }

    return 0;
}
