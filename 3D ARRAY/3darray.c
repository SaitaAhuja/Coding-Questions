#include <stdio.h>
int main() {
    int i, j, k;
    int term = 0, avg, yearlyAvg, total = 0,bestStudent = 0, bestYearlyAvg = 0,bestTerm = 0,
	  bestTermForBestStudent = 0, bestTermAvg = 0;
    int A[5][4][3];

    for(i = 0; i < 5; i++) {  
        printf("Roll no: %d\n", i + 1);  

        for(j = 0; j < 4; j++) {  
            if(j == 0) printf("Physics\n");
            if(j == 1) printf("Chemistry\n");  
            if(j == 2) printf("English\n");  
            if(j == 3) printf("Mathematics\n");  

            for(k = 0; k < 3; k++) {  
                printf("Enter marks of term %d (1-100): ", k + 1);  
                scanf("%d", &A[i][j][k]);  
                while((A[i][j][k] < 0) || (A[i][j][k] > 100)) {  
                    printf("Invalid Marks. Re-enter: ");
                    scanf("%d", &A[i][j][k]);
                }  
            }  
        }  
        printf("\n");  
    }  
    for(i = 0; i < 5; i++) {  
        printf("\nRoll no: %d\n", i + 1);
        total = 0;
        bestTermAvg = 0; 
    
        for(k = 0; k < 3; k++) {  
            term = 0;
            for(j = 0; j < 4; j++) { 
                term += A[i][j][k];
            }
            avg = term / 4; 
            printf("Average for Term %d: %d\n", k + 1, avg);
            total += avg;
            if(avg > bestTermAvg) {
                bestTermAvg = avg;
                bestTerm = k + 1;
            }
        }
        yearlyAvg = total / 3; 
        printf("Yearly Average: %d\n", yearlyAvg);

        if(yearlyAvg > bestYearlyAvg) {
            bestYearlyAvg = yearlyAvg;
            bestStudent = i + 1;
            bestTermForBestStudent = bestTerm;
        }
    }
    printf("\nThe Best Scorer is Roll No %d with Average %d\n", bestStudent, bestYearlyAvg);
    printf("Best Term for this student: Term %d\n", bestTermForBestStudent);

    return 0;
}
