//to link c program with file or file handling in c
#include <stdio.h>
#include <conio.h>
int main()
{
    FILE *fptr;
    fptr = fopen("D:\\timepass\\hello.txt", "w"); //file open in write mode
    if (fptr != NULL)
        printf("file open in write mode...\n");
    else
        printf("file doesn't exits!!\n");

    char name[20];
    int roll_no[20];
    long fee[20];
    int i = 0;
    int sum = 0;
    while (i < 10)
    {
        printf("enter your name:\n");
        scanf("%s", name);
        printf("enter your roll no:\n");
        scanf("%d", &roll_no[i]);
        printf("enter your monthly fee:\n");
        scanf("%li", &fee[i]);
        fprintf(fptr, "Name:%s\n", name);
        fprintf(fptr, "roll no:%d\n", roll_no);
        fprintf(fptr, "monthly fee is:%li\n", fee);
        sum = sum + fee[i];
        i++;
    }
    float average_fee;
    average_fee = sum;
    fprintf(fptr, "average fee is:%f", average_fee);
    fclose(fptr);
    getch();
    return 0;
}