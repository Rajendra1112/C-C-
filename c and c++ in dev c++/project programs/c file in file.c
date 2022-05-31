#include<stdio.h>
#include<string.h>
struct info{
        char name[20];
        int accno;
        float balance;
}t;
main()
{
    FILE *fp;
    int i;

    fp=fopen("CUST.dat","ab");
    for(i=0;i<1000;i++)
    {
        printf("Enter the acc no ");
        scanf("%d",&t.accno);
        fflush(stdin);
        printf("Enter the name ");
        gets(t.name);
        fflush(stdin);
        printf("Enter the balance ");
        scanf("%f",&t.balance);
        fflush(stdin);
        fwrite(&t,sizeof(t),1,fp);
    }
    fclose(fp);

    fp=fopen("CUST.dat","rb");
    printf("\n%-15s%-15s%-15s","Acc. No.","Name","Balance");
    while(fread(&t,sizeof(t),1,fp))
    {
        if(t.balance<1000)
        {
            printf("\n%-15d%-15s%-15.2f",t.accno,t.name,t.balance);
        }
    }
    fclose(fp);
}

