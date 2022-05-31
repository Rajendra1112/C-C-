#include <stdio.h>
#include <conio.h>
int main()
{
    int roll_no;
    char name[20];
    char course[20];
    FILE *fpo;
    char ans = 'y';
    fpo = fopen("D:\\timepass\\second_database.txt", "w");
    if (fpo != NULL)
    {
        printf("file open in write mode!!!\n");
        while (ans == 'y')
        {
            printf("enter student's name:\n");
            scanf("%s",name);
            printf("enter the studnet's roll no:\n");
            scanf("%d", &roll_no);
            printf("Enter the course taken by student:\n");
            scanf("%s",course);
            fprintf(fpo, "Name:%s\n", name);
            fprintf(fpo,"Roll no:%d\n", roll_no);
            fprintf(fpo,"Taken course is:%s\n\n",course);
            printf("Do you want to add more records:[y/n]\n");
            ans = getch();
        }
    }
    else
        printf("file doesn't exits!!!\n");
    fclose(fpo);
    return 0;
    getch();
}