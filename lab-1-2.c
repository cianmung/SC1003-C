#include<stdio.h>

int main()
{
    int numOfLines = 0, i = 0;
    char numsInput[20];
    printf("Enter number of lines:\n");
    scanf("%d", &numOfLines);
    printf("num line is %d\n", numOfLines);

    getchar();
    printf("Enter line\n");
    scanf("%[^\n]s", numsInput);
    printf("Number is %s\n", numsInput);

    return 0;
}
