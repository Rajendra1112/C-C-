#include<stdio.h>
#include<conio.h>
int add (int, int);
 main()
 {
 	int a,b,c;
 	printf("Enter any two numbers to be added: \n");
 	scanf("%d %d", &b,&c);
 	a = add(b,c);
 	printf("The sum is %d",a);
 	
 }
int add(int x, int y)
{
	int add;
	add = x+y;
	return(add);
}
