#include<stdio.h>
int main(){
	int i,day;
	for(i=1; i<=7; i++)
	{
	printf("enter the number of day \n");
	scanf("%d",&day);
	switch(day)
	{
		case 1:
			printf("the day is sunday \n");
			break;
			case 2:
				printf("the day is monday \n");
			break;
			case 3:
				printf("the day is tue \n");
				break;
				case 4:
					printf("the day is wed \n");
					break;
					case 5:
						printf("the day is thurs \n");
						break;
						case 6:
							printf("the day is fri \n");
							break;
							case 7:
								printf("the day is saturday \n");
								break;
							dafault:printf("you entered wrong day");
	}
	}
}
