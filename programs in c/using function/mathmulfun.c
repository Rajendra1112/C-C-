 #include<stdio.h>
 void mul(int ar[20][20],int b[20][20]);
 //int print(aa[20][20]);
 int main()
 {
  int r,c,a[20][20],b[20][20];
  for(r=0;r<3;r++)
  {
  printf("enter your element for %d row for 1st matrix",r);
  for (c=0;c<3;c++)
  {
  scanf("%d",&a[r][c]);
  }
  }
  for(r=0;r<3;r++)
  {
  for (c=0;c<3;c++)
  {
  printf("%d",a[r][c]);
  }
  printf("\n");
  }
  for(r=0;r<3;r++)
  {
  printf("enter your element for %d row for 2st matrix",r);
  for (c=0;c<3;c++)
  {
  scanf("%d",&b[r][c]);
  }
  }
  for(r=0;r<3;r++)
  {
  for (c=0;c<3;c++)
  {
  printf("%d",b[r][c]);
  }
  printf("\n");
  }

 /*for(r=0;r<3;r++)
  {
  for (c=0;c<3;c++)
  {
  mul(a[r][c],b[r][c]);
  }
  }
  }*/
  mul(a[r][c],b[r][c]);
  }
  void mul(int ar[20][20],int br[20][20])
  {
      int i,j,k,mul[20][20];
      for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            for(k=0; k<3; k++)
            {
                mul[i][j]+=ar[i][k]*br[k][j];
            }
        for(i=0; i<3; i++)
        for(j=0; j<3; j++)

            {
               printf("%d",mul[i][j]);
            }
  }

