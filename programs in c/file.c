#include<stdio.h>
#include<conio.h>
void main()
{
	char name[20];
	char address[20];
	int telno[20];
	int i,n;
	FILE *fp;
	fp=fopen("rec.txt","a");
	printf("enter how many records:");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		printf("\nenter the name: ");
		scanf("%s",&name);
		printf("\n enter the address:");
		scanf("%s",address);
		printf("\nenter the telephone no:");
		scanf("%d",&telno);
		fprintf(fp,"\n%s\t%s\t%d\n",name,address,telno);
	}
	fclose(fp);
	fp=fopen("rec.txt","r");
	printf("name\taddress\ttelno\n");
	while(fscanf(fp,"%s%s%d",name,address,telno)!=EOF)
	{
		printf("\n%s\t%s\t%d\n",name,address,telno);
	}
	fclose(fp);
	getch();
}
