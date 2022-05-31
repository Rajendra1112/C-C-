#include<iostream>
using namespace std;
int main(){
	char ch;
	int count=0;
	cout<<"enter your name:";
	while(ch!='\n'){
		cin.get(ch);
		cout.put(ch);
		count++;
	}
	cout<<"total char is:"<<count-1;
	return 0;
}
