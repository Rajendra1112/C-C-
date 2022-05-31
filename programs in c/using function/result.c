#include <stdio.h>
void res(int,int,int,int,int);
main()
{
     float math,physics,digital_logic,c_progaming,IIT;
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
     res(math,physics,digital_logic,c_progaming,IIT);
     }
     void res(int math,int physics,int digital_logic,int c_progaming,int IIT)

     {
         float percentage;
          if(math>=0 &&math<=100)
     {
      if(physics>=0 &&physics<=100)
       {
         if(digital_logic>=0 && digital_logic<=100)
           {
             if(c_progaming>=0 && c_progaming<=100)
              {
                if(IIT>=0 && IIT<=100)
                 {
                    percentage=((math+physics+digital_logic+c_progaming+IIT)/5)*100;
                    printf("your percentage is %f",percentage);
                 }}}}}
     }

