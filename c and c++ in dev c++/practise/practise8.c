#include<stdio.h>
#include<conio.h>
int main(){
	int day;
	printf("enter the number of day: \n");
	scanf("%d",&day);
	switch(day)
	{
		case 1:
		printf("sunday");
		break;
		case 2:
			printf("monday");
			break;
		case 3:
			printf("tuesday");
			break;
		case 4:
			printf("wednesday");
			break;
		case 5:
			printf("thursday");
			break;
		case 6:
			printf("friday");
			break;
		case 7:
			printf("saturday");
			default:
				printf("invalid option given");
	}
	return 0;
}
