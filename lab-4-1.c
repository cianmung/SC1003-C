#include<stdio.h>
#include<string.h>
#include<ctype.h>

char *sweepSpace(char *str);

int main()
{
    char str[80], *p;

    printf("Enter the string: \n");
    fgets(str, 80, stdin);
    if(p=strchr(str, '\n')) *p = '\0';
    printf("sweepSpace(): %s\n", sweepSpace(str));

    return 0;
}

char *sweepSpace(char *str)
{
    static char sweptStr[80];
    int i;
    sweptStr[0]='\0';
    for(i=0; i<strlen(str); i++)
    {
        if(isspace(str[i]) == 0)
        {
            strncat(sweptStr, &str[i], 1);
        }
    }
    return sweptStr;
}
