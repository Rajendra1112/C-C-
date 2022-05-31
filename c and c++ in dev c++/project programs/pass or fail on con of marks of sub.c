#include <stdio.h>
main()
{
     float math,physics,digital_logic,c_progaming,IIT,percentage,ans;
     printf("enter the marks of math:");
     scanf("%f",&math);
     printf("enter the marks of physics:");
     scanf("%f",&physics);
     printf("enter the marks of digital logic: ");
     scanf("%f",&digital_logic);
     printf("enter the marks of c programing:");
     scanf("%f",&c_progaming);
     printf("enter the marks of IIT: ");
     scanf("%f",&IIT);
     if(math>=45 &&math<=100)
     {
      if(physics>=45 &&physics<=100)
       {
         if(digital_logic>=45 && digital_logic<=100)
           {
             if(c_progaming>=45 && c_progaming<=100)
              {
                if(IIT>=45 && IIT<=100)
                 {
                    printf("PASS");
                 }
                 else
                 printf("FAIL");
                 }
                 else
                   printf("FAIL");}
                   else
                     printf("FAIL");}
                     else
                       printf("FAIL");}
                  percentage=((math+physics+digital_logic+c_progaming+IIT)/500)*100;
                   printf("\nyour percentage is %f",percentage);
                   if(percentage>=80 && percentage<=100)
                   {
                   printf("\nDISTINCTION");
                     }
else if(percentage>=0 && percentage<=60)
                   {
                   printf("\n2nd Division");
                   }
                   else
                   {
                   printf("\ninvalid");
                   }
     }

