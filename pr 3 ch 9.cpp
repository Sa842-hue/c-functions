#include<iostream> 
using namespace std;
void table(int a);
int main ()
{ int x;
cout<<"Enter a number";
cin>>x;
table(x);
return 0;
}
void table (int a)
{
	int c;
	for(c=1;c>=10;c++)
	{
		cout<<a<<"*"<<c<<"="<<a*c<<endl;
	}
}
