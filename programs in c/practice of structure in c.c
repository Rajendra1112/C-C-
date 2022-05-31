#include <stdio.h>
struct emp //here struct emp both word used to name as one data type like int,flaot,double,char etc
{
    int eno;
    char ename[20];
    float esalary;
};
int main()
{
    struct emp e; //here until we don't write variable e memory is not allocated as we know writing int don't allocate memory
    printf("size of struct emp is:%d", sizeof(struct emp));
    printf("\nsize of struct emp is:%d", sizeof(e));
    struct emp em = {100, "rajendra thapa", 80000};
    printf("employee detail is:\n");
    printf("eno=%d\tename=%s\tesalary=%f", em.eno, em.ename, em.esalary);
    return 0;
}