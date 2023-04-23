#include<iostream>
using namespace std;
class Array
{
	int *p;
	public:
	Array(int a[])
	{
		p=a;
	}
	void show()
	{
		for(int i=0;i<5;i++)
		{
			cout<<"a["<<i<<"]-->"<<p[i]<<"\n";
		}
	}
};
int main()
{
	int a[5];
	cout<<"\nEnter five elements in array:\n";
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	Array *ar=new Array(a);
	ar->show();
}
