#include<iostream>
using namespace std;
class Factorial
{
	private:
		int a;
	public:
		
	void setValue()
	{
	cout<<"Enter number\t";
	cin>>a;	
	}
	int calFactorial()
	{
		int i=1,f=1;
		while(i<=a)
		{
			f=f*i;
			i++;
		}
		return f;
	}
};

int main()
{
	Factorial c;
	c.setValue();
	int result=c.calFactorial();
	cout<<"\nFactorial is:\t"<<result;
}

