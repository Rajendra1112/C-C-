#include <stdio.h>
#include <conio.h>
int main()
{
    FILE *one;
    char s_name[20];
    int marks;
    char answer = 'y';
    one = fopen("D:\\timepass\\file_handling_partb", "w");
    if (one != NULL)
    {
        while (answer == 'y')
        {
            printf("enter student's name:\n");
            scanf("%s", s_name);
            fprintf(one, "Student name:%s\n", s_name);
            printf("enter the score of student:\n");
            scanf("%d", &marks);
            fprintf(one, "student marks:%d\n", marks);
            printf("Do you want to enter more records [y/n]:\n");
            answer = getch();
        }
    }
    else
        printf("\nfile doesn't found!!!");
    fclose(one);
    getch();
    return 0;
}