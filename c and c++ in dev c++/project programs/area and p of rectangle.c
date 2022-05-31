#include <stdio.h>
#include <conio.h>
int main()
{
    float length, width, area,p;
    printf("Enter length of Rectangle\n");
    scanf("%f", &length);
    printf("Enter width of Rectangle\n");
    scanf("%f", &width);
    area = length * width;
    printf("Area of Rectangle : %0.4f\n", area);
p=2*(length+width);
printf("perimeter of rectangle is %d",p);
    getch();
    return 0;
}

