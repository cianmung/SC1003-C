#include<stdio.h>

int digitPos1(int num, int digit);
void digitPos2(int num, int digit, int *result);

int main()
{
    int number, digit, result = 0;
    printf("Enter the number:\n");
    scanf("%d", &number);
    printf("Enter the digit:\n");
    scanf("%d", &digit);
    printf("digitPos1():%d\n", digitPos1(number, digit));
    digitPos2(number, digit, &result);
    printf("digitPos2():%d\n", result);

    return 0;
}

int digitPos1(int num, int digit)
{
    int result = 0;

    for (int i = 0; i < num; i++)
    {
        if(num % 10 == digit) {
            result = i + 1;
            break;
        }
        num = num/10;
    }
    return result;
}

void digitPos2(int num, int digit, int *result)
{
    *result = digitPos1(num, digit);
}
