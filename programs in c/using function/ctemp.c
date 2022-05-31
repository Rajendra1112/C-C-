#include<stdio.h>
int temp(float);
main()
{
    float centigrade,d;
    printf("enter centigrade:");
    scanf("%f",&centigrade);
    d=temp(centigrade);
    printf("required fahrenheit is %f",d);
    }
    int temp(float centrigrade)
    {
        float fahrenheit;
        fahrenheit=((centrigrade/100)*180)+32;
        return fahrenheit;
    }
