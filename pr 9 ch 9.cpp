#include<iostream>
using namespace std;
void swap(int &x,int &y);
int main()
{
	int a,b;
	cout<<"Enter two integers:";
	cin>>a>>b;
	cout<"Values before swapping:\n";
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	cout<<"Swapping the values:\n";
	swap(a,b);
	cout<<"After swapping the values:";
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	return 0;
}
void swap(int &x,int &y)
{
	int t;
	t=x;
	x=y;
	y=t;
}
