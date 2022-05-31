#include<iostream>
using namespace std;
#include<conio.h>
	int main()
	{

		int size,i;
		int *ptr;

		cout<<"\n\tEnter size of Array : ";
		cin>>size;

		ptr = new int[size];
		//Creating memory at run-time and return first byte of address to ptr.


	  for(i=0;i<size;i++)        //Input arrray from user.
	  {
		 cout<<"\nEnter any number : ";
		 cin>>ptr[i];
	  }

	  for(i=0;i<size;i++) 
	  {        //Output arrray to console.
	  cout<<ptr[i];
	  cout<<",";
}
	  delete[] ptr;
	  //deallocating all the memory created by new operator
	  return 0;
	  getch();
}
	
