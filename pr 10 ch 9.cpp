#include<iostream>
using namespace std;
char grade(int n);
int main()
{
	int marks;
	char g;
	cout<<"Enter marks:";
	cin>>marks;
	g=grade(marks);
	cout<<"Your grade is:"<<g;
return 0;	
}
char grade(int n)
{
	if(n>80)
	return 'A';
	else if (n>60)
	return 'B';
	else if (n>40)
	return 'C';
	else
	return'F';
}


