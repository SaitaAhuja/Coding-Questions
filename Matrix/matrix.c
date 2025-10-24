#include <stdio.h>

int main() {
int m, n, i, j, count = 0, sol;
printf("Enter the no. of rows:");
scanf("%d",&m);
printf("Enter the no. of columns:");
scanf("%d",&n);
int A[m][n];
for(i=0;i<m;i++){
for(j=0;j<n;j++){
printf("Enter element A[%d][%d]:",i,j);
scanf("%d",&A[i][j]);
}
}
for(i=0;i<m;i++){
for(j=0;j<n;j++){
printf("%d  ",A[i][j]);
if(A[i][j] == 0){
count++;
}
}
printf("\n");
}
printf("Total zeros %d\n",count);
sol= (m*n)/2;
if(count >= sol){
printf("It is a sparse matrix\n");
}
else{
printf("It is not a sparse matrix\n");
}
return 0;
}
