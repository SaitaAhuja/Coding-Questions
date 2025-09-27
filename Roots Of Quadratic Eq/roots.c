#include <stdio.h>
#include <math.h>
int main(){
double a,b,c,real_part,imag_part,root1,root2,discriminant;
printf("Enter coefficient a:\n");
scanf("%lf",&a);
printf("Enter coefficient b:\n");
scanf("%lf",&b);
printf("Enter coefficient c:\n");
scanf("%lf",&c);

discriminant = b * b - 4 * a * c;

if (a == 0){
printf("This is not a quadratic equation (a cannot be 0).\n");      
}
else if (discriminant > 0){
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
     printf("Roots are real and different.\n");
     printf("Root 1 = %.2lf\n", root1);
     printf("Root 2 = %.2lf\n", root2);
}
else if (discriminant == 0){
       root1 = -b / (2 * a);
     printf("Roots are real and equal.\n");
     printf("Root 1 = Root 2 = %.2lf\n", root1);
}
else {
        real_part = -b / (2 * a);
        imag_part = sqrt(-discriminant) / (2 * a);
     printf("Roots are complex and different.\n");
     printf("Root 1 = %.2lf + %.2lfi\n", real_part, imag_part);
     printf("Root 2 = %.2lf - %.2lfi\n", real_part, imag_part);
}
return 0;
}
