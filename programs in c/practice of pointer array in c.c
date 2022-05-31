#include <stdio.h>
#include <string.h>
void show(char a[]) //passing array as function argument..array is only pass by reference
{
    int i = 0;
    while (a[i] != '\0')
    {
        printf("%c", a[i]);
        i++;
    }
}
int main()
{
    char a1[6] = "rajan";
    char *a2;
    a2 = a1; //a1 array return base address of first element in array..so no need to put ampersand operator..
    int i;
    for (i = 0; i < sizeof(a1); i++)
    {
        printf("%c", a2[i]);
    }
    printf("\n");
    char ca[12] = "Rohan";
    show(ca);
    return 0;
}