#include<stdio.h>
int main()
{
    int height;
    printf("Enter the height:\n");
    scanf("%d", &height);
    printf("Pattern:\n");
    for(int i=1; i <= height; i++) {
        for (int j = 1; j <= i; j++) {
            if(i%3 == 0) {
                printf("%d",3);
            } else {
                printf("%d", i % 3);
            }
        }
        printf("\n");
    }

    return 0;
}
