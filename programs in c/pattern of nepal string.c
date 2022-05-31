#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
      char string[100];
      int c, k, length;
      printf("Enter a string\n");
      scanf("%s",&string);
      //gets(string);
      length = strlen(string);
      for ( c = 0 ; c < length ; c++ )
      {
          for( k = 0 ; k <= c ; k++ )
          {
               printf("%c", string[k]);
          }
          printf("\n");
      }
     getch();
}
