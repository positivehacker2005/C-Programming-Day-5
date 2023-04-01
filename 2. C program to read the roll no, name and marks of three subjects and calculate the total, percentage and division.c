#include <stdio.h>

int main() {
    int rollno, mark1, mark2, mark3;
    char name[50];
    float total, percentage;
    
    printf("Enter Roll Number: ");
    scanf("%d", &rollno);
    
    printf("Enter Name: ");
    scanf("%s", name);
    
    printf("Enter Mark1: ");
    scanf("%d", &mark1);
    
    printf("Enter Mark2: ");
    scanf("%d", &mark2);
    
    printf("Enter Mark3: ");
    scanf("%d", &mark3);
    
    total = mark1 + mark2 + mark3;
    percentage = total / 3;
    
    printf("\nRoll Number: %d\n", rollno);
    printf("Name: %s\n", name);
    printf("Total Marks: %.2f\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    
    if (percentage >= 60) {
        printf("Division: First\n");
    } else if (percentage >= 50) {
        printf("Division: Second\n");
    } else if (percentage >= 40) {
        printf("Division: Third\n");
    } else {
        printf("Division: Fail\n");
    }
    
    return 0;
}
