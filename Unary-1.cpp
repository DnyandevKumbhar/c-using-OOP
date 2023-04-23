/*Q. WA Program to create the class name as OverloadUnary and overload the unary minus (-) operator and change the sign of values from object
 or class and class contain three values   a, b and c.*/
#include<iostream>
using namespace std;
class OverloadUnary
{
	int a,b,c;
	public:
	OverloadUnary(int a,int b,int c)
	{
	this->a=a;
	this->b=b;
	this->c=c;
	}
	void operator -()
	{
		if(a>0 || b>0 || c>0)
		{
		
		a=a-a*2;
		b=b-b*2;
		c=c-c*2;
		}
		else if(a<0 || b<0 || c<0)
		{
		a=a+a*2;
		b=b+b*2;
		c=c+c*2;
		}
	}
	void show()
	{
		cout<<"\nA="<<a<<"\tB="<<b<<"\tC="<<c;
	}
};
int main()
{
	int a,b,c;
	cout<<"Enter A, B and C values:\t";
	cin>>a>>b>>c;
	OverloadUnary o(a,b,c);
	-o;
	o.show();
}

