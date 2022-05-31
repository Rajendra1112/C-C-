#include<stdio.h>
void no();
main()
{
no();
}
void no()
{
int a=10;
float x=11.123456;
printf("%-6d",a);
printf("\n");
printf("%+d",a);
printf("\n");
printf("%09d",a);
printf("\n");
printf("% d",a);
printf("\n");
printf("%#o",a);
printf("\n");
printf("%#0x",a);
printf("\n");
printf("%7.2f",x);


}
