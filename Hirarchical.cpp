#include<iostream>
using namespace std;
class Value
{
	protected:
	int a,b;
	public:
	void setvalue(int x,int y)
	{
		a=x;
		b=y;
	}
};
class Add:public Value
{
	public:
	void show()
	{
		cout<<"\nAddition is:\t"<<a+b;
		
	}
};
class Mul:public Value
{
	public:
	void show()
	{
		cout<<"\nMultiplication is:\t"<<a*b;
	}
};
class Div:public Value
{
	public:
	void show()
	{
		cout<<"\nDivision is:\t"<<a/b;
	}
};
int main()
{
	int a,b;
	cout<<"Enter two numbers:\t";
	cin>>a>>b;
	Add a1;
	a1.setvalue(a,b);
	a1.show();
	Mul m;
	m.setvalue(a,b);
	m.show();
	Div d;
	d.setvalue(a,b);
	d.show();
}
