#include<stdio.h>
#include<string.h>
#include<math.h>
main()
{
    char a[10],r,b[10],c[10];int x,n,i;
    printf("Enter a string ");
    scanf("%s",&a);
    n=strlen(a);
    /*for(i=n-1;i>=0;i--)
    {
        r=a[i];
        x=abs(i-(n-1));
        b[x]=r;
    }*/
    for(i=0;a[i]!= '\0';i++)
    {
        //r=a[i];
        x=abs(i-(n-1));
        b[i]=a[x];
    }
    b[i]= '\0';
    printf("The reverse is %s",b);
}
