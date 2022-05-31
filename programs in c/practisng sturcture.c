#include <stdio.h>
#include "structure.h"
int main()
{
    struct user u1;
    struct user u2;
    printf("enter user1 idno:");
    scanf("%d", &u1.idno);
    printf("enter user1 first name:");
    scanf("%s", &u1.firstname);
    printf("enter user1 lastname:");
    scanf("%s", &u1.lastname);
    printf("enter user1 weight:");
    scanf("%f", &u1.weight);
    printf("enter user1 salary:");
    scanf("%lf", &u1.salary);
    printf("user1 details:\n");
    printf("idno:%d\tfirstname=%s\tlastname=%s\nweight=%f\tsalary=%lf", u1.idno, u1.firstname, u1.lastname, u1.weight, u1.salary);
    return 0;
}