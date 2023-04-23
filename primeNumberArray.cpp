#include<iostream>
using namespace std;
int i,j,c;
void pn(int a[])
{
	for(i=0;i<5;i++)
	{	
	c=0;
		for(j=1;j<=a[i];j++)
		{
			if(a[i]%j==0)
			{
				c++;
			}			
		}
		if(c==2)
		{
			cout<<a[i]<<"\t";
		}
	}
}
int main()
{
	int a[5];
	cout<<"Enter five values in array:\t";
	for(i=0;i<5;i++)
	{
		cin>>a[i];
	}
	pn(a);
}
