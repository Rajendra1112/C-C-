#include<stdio.h>
int main(void)
{
    float dollars;
    printf("Please enter dollars:");
    scanf("%f", &dollars);
    float rupees = dollars * 64;
    printf("%f Rupees", rupees);
}


