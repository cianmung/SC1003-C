#include<stdio.h>

int main()
{
    int studentID = 0,mark;
    printf("Enter Student ID:\n");
    scanf("%d", &studentID);
    while(studentID != -1) {
        printf("Enter Mark:\n");
        scanf("%d", &mark);
        if(mark >= 75) {
            printf("Grade = A\n");
        } else if(mark >= 65) {
            printf("Grade = B\n");
        } else if(mark >= 55) {
            printf("Grade = C\n");
        } else if(mark >= 45) {
            printf("Grade = D\n");
        } else {
            printf("Grade = F\n");
        }

        printf("Enter Student ID:\n");
        scanf("%d", &studentID);
    }
    return 0;
}
