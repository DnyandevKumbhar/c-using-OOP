#include<iostream>
#include<stdlib.h>
using namespace std;
class findMax
{
	int *p,size;
	public:
	findMax(int a[],int size)			//constructor
	{
		p=a;
		this->size=size;
	}
	int getmax()
	{
		int max=p[0];
		for(int i=0;i<size;i++)
		{
			if(max<p[i])
			{
				max=p[i];
			}
		}
		return max;
	}
};
int main()
{
	int *p,size;
	cout<<"Enter size of array:\t";
	cin>>size;
	p=(int *)malloc(sizeof(int)*size);
	cout<<"\nEnter elements in array:\n";
	
	for(int i=0;i<size;i++)
	{
		cin>>p[i];
	}
	findMax f(p,size);
	int max=f.getmax();
	cout<<"\nMaximum element is:"<<max;
}
