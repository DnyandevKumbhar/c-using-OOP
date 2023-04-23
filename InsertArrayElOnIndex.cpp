#include<iostream>
using namespace std;
class InsertArryEle
{
	int *p;
	public:
	void setArray(int a[])
	{
		p=a;
	}
	void insertValueOnIndex(int ind,int v)
	{
		for(int i=4;i>=ind;i--)
		{
			p[i+1]=p[i];
		}
		p[ind]=v;
	}
	void show()
	{
		for(int i=0;i<6;i++)
		{
			cout<<"\n"<<p[i];
		}
	}
};
int main()
{
	InsertArryEle e;
	int a[6],value,index;
	cout<<"Enter five elements in array:\n";
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	e.setArray(a);
	cout<<"\nIndex and value:\t";
	cin>>index>>value;
	e.insertValueOnIndex(index,value);
	e.show();
}
