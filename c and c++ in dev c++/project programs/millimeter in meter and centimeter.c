#include<stdio.h>
void main()
{
        float number1,number2,number3;
        printf("Enter the number in millimeter= ");

        if(scanf("%f",&number1)==1)
        {
                number2=number1/10;
                number3=number1/1000;
                printf(" \nYour answer in centimeter =%0.2f",number2);
                printf("\nYour answer in meter =%0.2f",number3);
        }
else
{
        printf("error,enter correct value");
}
}

