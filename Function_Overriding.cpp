#include<iostream>
using namespace std;
class A
{
	public:
		void show()
		{
			cout<<"\nI am parent method.";
		}
};
class B:public A
{
	public:
		void show()
		{
			cout<<"\nI am child method.";
			
		}
};
int main()
{
	B b1;
	b1.show();
	A a1;
	a1.show();
}
