#include<stdio.h>
int main(){
	int n;
	int sum=0;
	n=1;
	while(n<=10)
	{
		sum+=n*n;
		n=n+1;
	}
	printf("sum=%d\n",sum);
	
}
