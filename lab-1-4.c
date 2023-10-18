#include<stdio.h>
#include<math.h>

int main()
{
    double xValue;
    double eValue = 1;

    printf("Enter x:\n");
    scanf("%lf", &xValue);

    for(int i = 1; i <= 10; i++) {
        int factorial = 1;
        double upperNum = pow(xValue, i);
        for(int j = 1; j <= i; j++) {
            factorial *= j;
        }

        eValue += upperNum/factorial;
    }

    printf("Result = %.2f", eValue);
    return 0;
}
