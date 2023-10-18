#include<stdio.h>
#include<stdlib.h>


int main()
{
    int numOfLines = 0, i = 0;
    printf("Enter number of lines:\n");
    scanf("%d", &numOfLines);

    getchar();
    while(i < numOfLines) {
        int total = 0;
        int count = 0;
        int numsInput;

        printf("Enter line %d (end with -1):\n", i+1);
        while(scanf("%d", &numsInput) == 1) {
            if(numsInput != -1) {
                total += numsInput;
                count++;
            }else {
                break;
            }
        }

        double average = (double)total/count;
        printf("Average = %.2f\n", average);
        i++;
    }
    return 0;

}
