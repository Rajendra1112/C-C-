#include <stdio.h>
#include "structure.h"
int main()
{
    struct user u[10];
    int i;
    for (i = 1; i < 6; i++)
    {
        printf("enter idno of user%d:", i);
        scanf("%d", &u[i].idno);
        printf("enter first name of user%d:", i);
        scanf("%s", &u[i].firstname);
        printf("enter last name of user%d:", i);
        scanf("%s", &u[i].lastname);
    }
    printf("detail of five users are:\n");
    for (i = 1; i < 6; i++)
    {
        printf("user%d idno is:%d\n", i, u[i].idno);
        printf("user%d firstname is:%s\n", i, u[i].firstname);
        printf("user%d lastname is:%s\n", i, u[i].lastname);
    }
    return 0;
}