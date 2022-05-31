#include<stdio.h>
#include<conio.h>
int main(){
	int day,month,year;
	printf("enter day,month,year in dd-mm-yyyy format:");
	scanf("%d%d%d",&day,&month,&year);
	printf("\n day:%d \t month:%d \t year:%d",day,month,year);
	getch();
	return 0;
}
