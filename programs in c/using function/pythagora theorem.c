#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int hypo,h,p,b,*pp,*bp,*hp;
	printf("enter the perpendicular and base:\n");
	scanf("%d %d",&p,&b);
	pp=&p;
	bp=&b;
	printf("the required hypatenuse is:\n");
	h=(*pp)*(*pp)+(*bp)*(*bp);
	hypo=sqrt(h);
	hp=&hypo;
	printf("%d",*hp);
	getch();
}
