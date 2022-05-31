#include <stdio.h>
void main()
{  int p,c,m,t,mp;
   printf("Eligibility Criteria :\n");
   printf("Marks in Maths >=60\n");
   printf("and Marks in Phy >=50\n");
   printf("and Marks in Chem>=40\n");
   printf("and Total in all three subject >=200\n");
   printf("or Total in Maths and Physics >=150\n");
   printf("-------------------------------------\n");
   printf("Input the marks obtained in Physics :");
   scanf("%d",&p);
   printf("Input the marks obtained in Chemistry :");
   scanf("%d",&c);
   printf("Input the marks obtained in Mathematics :");
   scanf("%d",&m);
   printf("Total marks of Maths, Physics and Chemistry : %d\n",m+p+c);
   printf("Total marks of Maths and  Physics : %d\n",m+p);

   if (m>=60)
         if(p>=50)
             if(c>=40)
	        if((m+p+c)>=200||(m+p)>=150)
	           printf("The  candidate is eligible for admission.\n");
	        else
	          printf("The candidate is not eligible.\n");
             else
	    printf("The candidate is not eligible.\n");
         else
	   printf("The candidate is not eligible.\n");
    else
     printf("The candidate is not eligible.\n");
}

