#include<iostream>
#include<string.h>
using namespace std;
class ArrayFeqCount
{
	int *p;
	public:
	void setIntArray(int a[])
	{
		p=a;
	}
	void countFeq()
	{
		for(int i=0;i<10;i++)
		{
			for(int j=i+1;j<10;j++)
			{
				if(p[i]>p[j])
				{
					int t=p[i];
					p[i]=p[j];
					p[j]=t;
				}
			}
		}
		int count=1;
		for(int i=0;i<10;i++)
		{
			if(p[i]==p[i+1])
			{
				count++;
			}	
			else
			{
				cout<<"\nElement "<<p[i]<<" Is occured "<<count<<" times.\n";
				count=1;
			}
		}
	}
};
int main()
{
	int a[10];
	cout<<"Enter elements in array:\n";
	for(int i=0;i<10;i++)
	{
		cin>>a[i];
	}
	ArrayFeqCount a1;
	a1.setIntArray(a);
	a1.countFeq();
	
}
