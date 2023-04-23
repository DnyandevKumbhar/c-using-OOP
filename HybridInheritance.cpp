#include<iostream>
using namespace std;
//virtual class
class a
{
	public:
		void show()
		{
			cout<<"I am a method\n";
		}
};
class b:virtual public a
{
	public:
	void display()
	{
		cout<<"I am b method\n";
	}
};
class c:virtual public a
{
	public:
	void test()
	{
		cout<<"I am c method\n";
	}
};
class d:public b,public c
{
	public:
		void disp()
		{
			cout<<"I am d method\n";
		}
};
int main()
{
	d d1;
	d1.show();
	d1.display();
	d1.test();
	d1.disp();
	
}
