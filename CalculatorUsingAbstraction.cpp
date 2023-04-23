#include<iostream>
using namespace std;
class value
{
	protected:
		int a,b;
	public:
		void setValue(int x,int y)
		{
			a=x;
			b=y;
		}
	virtual int getResult()=0;
};
class Add:public value
{
	public:
		int getResult()
		{
			return a+b;
		}
	
};
class Sub:public value
{
	public:
		int getResult()
		{
			return a-b;
		}
	
};
class Mul:public value
{
	public:
		int getResult()
		{
			return a*b;
		}
	
};
class Div:public value
{
	public:
		int getResult()
		{
			return a/b;
		}
	
};
int main()
{
	int a,b;
	cout<<"\nEnter two numbers:\t";
	cin>>a>>b;
	value *v;
	v->setValue(a,b);
	v=new Add();
	int r=v->getResult();
	cout<<"\nAddition of two numbers is:\t"<<r;
	v=new Sub();
	int p=v->getResult();
	cout<<"\nAddition of two numbers is:\t"<<p;
	v=new Mul();
	int q=v->getResult();
	cout<<"\nAddition of two numbers is:\t"<<q;
	v=new Div();
	int s=v->getResult();
	cout<<"\nAddition of two numbers is:\t"<<s;
}
