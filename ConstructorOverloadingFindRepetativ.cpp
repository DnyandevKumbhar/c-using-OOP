/*WAP to create the class name  FindRepetative with overloaded constructor 
FindRepetative(int a[])
FindeRepetative(char ch[])
perform the find repetative operations alocate array by malloc.*/

#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

class FindRepetative
{
	int *p,size,l;
	char *q;
	public:
	FindRepetative(int a[],int size)
	{
		p=a;
		this->size=size;
		for(int i=0;i<size;i++)
		{
			for(int j=(i+1);j<size;j++)
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
		for(int i=0;i<size;i++)
		{
			if(p[i]==p[i+1])
			{
				count++;
			}
			else
			{
				cout<<"\nThe element "<<p[i]<<" Occured "<<count<<" times.";
				count=1;
			}
		}
	}
	FindRepetative(char ch[],int l)
	{
		q=ch;
		this->l=l;
		for(int i=0;i<l;i++)
		{
			for(int j=i+1;j<l;j++)
			{
				if(q[i]>q[j])
				{
					char t=q[i];
					q[i]=q[j];
					q[j]=t;
				}
			}
		
		}
		int c=1;
		for(int i=0;i<l;i++)
		{
			if(q[i]==q[i+1])
			{
				c++;
			}
			else
			{
				cout<<"\nThe character "<<q[i]<<" Occured "<<c<<" times.";
				c=1;
			}
		}
		
	}
	
	
};
int main()
{
	int *p,size;
	char *q;
	cout<<"\nEnter size of array:\t";
	cin>>size;
	p=(int*)malloc(sizeof(int)*size);
	cout<<"\nEnter elemets in array:\n";
	for(int i=0;i<size;i++)
	{
		cin>>p[i];
	}
	FindRepetative f(p,size);
	q=(char*)malloc(sizeof(char)*90);
	cout<<"\nEnter values in string:\t";
	cin>>q;
	int l=strlen(q);
	FindRepetative f1(q,l);
}

