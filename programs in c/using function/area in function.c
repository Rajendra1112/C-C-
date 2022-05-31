#include<stdio.h>
#define PI 3.14
int area(float);
main()
{
    float radius,d;
    printf("enter the radius of circle:");
    scanf("%f",&radius);
    d=area(radius);
     printf("the area of circle is %f",d);
     }
int area(float radius)
{
    float area;
area=PI*radius*radius;
return area;
}
