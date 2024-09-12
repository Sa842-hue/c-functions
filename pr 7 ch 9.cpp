#include<iostream>
using namespace std;
void cal (int x,int y, char op);
int main()
{
	int a,b;
	char c;
	cout<<"Enter first number,operator and second number:";
	cin>>a>>b>>c;
	cal(a,b,c);
	return 0;
}
void cal(int x,int y,char op)
{
	switch(op)
	{
		case '+':
			cout<<x<<"+"<<y<<"="<<x+y;
			break;
			case '-':
				cout<<x<<"-"<<y<<"="<<x-y;
				break;
				case'*':	
			cout<<x<<"*"<<y<<"="<<x*y;
			break;
				case '/':
			cout<<x<<"/"<<y<<"="<<x/y;
			break;
				case '%':
			cout<<x<<"%"<<y<<"="<<x%y;
			break;
			default:
				cout<<"Invalid operator!";	
	}
	
}

