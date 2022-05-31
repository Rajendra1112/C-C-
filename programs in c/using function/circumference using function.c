#include<stdio.h>
#define PI 3.14
int circum(float);
main()
{
    float radius,d;
    printf("enter the radius of circle:");
    scanf("%f",&radius);
    d=circum(radius);
     printf("the circumference of circle is %f",d);
     }
int circum(float radius)
{
    float circum;
circum=PI*radius*2;
return circum;
}
