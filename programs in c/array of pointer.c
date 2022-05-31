#include <stdio.h>
int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int *p[5], i;
    for (i = 0; i < 5; i++)
    {
        printf("%d", a[i]);
        printf("\n");
    }
    printf("\n");
    p[i] = &a;
    for (i = 0; i < 5; i++)
    {
        printf("%p\n", p[i]);
    }
}
