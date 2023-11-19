#include<stdio.h>
#include<string.h>
#define MAX 100
typedef struct
{
    char name[20];
    int telno;
} PhoneBk;

void printPB(PhoneBk *pb, int size);
int reading(PhoneBk *pb);
void search(PhoneBk *pb, int size, char *target);

int main()
{
    PhoneBk s[MAX];
    char t[20], *p;
    int size=0, choice;
    char dummychar;

    printf("Select one of the following options: \n");
    printf("1: readin()\n");
    printf("2: search()\n");
    printf("3: printPB()\n");
    printf("4: exit()\n");

    do
    {
        printf("Enter your choice: \n");
        scanf("%d", &choice);
        switch(choice)
        {
        case 1:
            scanf("%c", &dummychar);
            size = readin(s);
            break;
        case 2:
            scanf("%c", &dummychar);
            printf("Enter search name: \n");
            fgets(t, 20, stdin);
            if(p=strchr(t,'\n')) *p = '\0';
            search(s,size,t);
            break;
        case 3:
            printPB(s,size);
            break;
        }
    }
    while(choice < 4);

    return 0;
}
void printPB(PhoneBk *pb, int size)
{
    printf("The phonebook list:\n");
    if(size > 0)
    {
        for(int i=0; i<size; i++)
        {
            printf("Name: %s\n", pb[i].name);
            printf("Telno: %d\n", pb[i].telno);
        }
    }
    else
    {
        printf("Empty phonebook\n");
    }
}

int readin(PhoneBk *pb)
{
    char name[20], tel[20];
    int index = 0;
    do
    {
        printf("Enter name:\n");
        fgets(name, 20, stdin);
        name[strcspn(name, "\n")] = '\0';
        if(name[0] != '#')
        {
            printf("Enter tel:\n");
            fgets(tel, 20, stdin);
            strcpy(pb[index].name, name);
            pb[index].telno = atoi(tel);
            index++;
        }
    }
    while (name[0] != '#');

    return index;
}

void search(PhoneBk *pb, int size, char *target)
{
    int found = 0;
    int index;
    for(int i=0; i<size; i++)
    {
        if(strcmp(pb[i].name, target) == 0)
        {
            found = 1;
            index = i;
        }
    }
    if(found == 1)
    {
        printf("Name = %s, Tel = %d\n", pb[index].name, pb[index].telno);
    }
    else
    {
        printf("Name not found\n");
    }
}
