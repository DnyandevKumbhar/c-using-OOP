#include<iostream>
#include<string.h>
using namespace std;
class Reverse
{
	protected:
	int *p;
	char q[100];
	public:
	void setvalue(char ch[],int a[])
	{
		
		strcpy(q,ch);
		p=a;
	}
};
class String:public Reverse
{
	public:
		void rev()
		{
			int l=strlen(q);
			int m=l/2;
			int e=l-1;
			for(int i=0;i<m;i++)
			{
				char t=q[i];
				q[i]=q[e];
				q[e]=t;
				e--;
			}
			cout<<"\nString after reverse:\t"<<q;
			
			
		}
	
};
class Array:public Reverse
{
	public:
		void rev()
		{
			int l1=5;
			int m1=l1/2;
			int e1=l1-1;
			for(int i=0;i<m1;i++)
			{
				int te=p[i];
				p[i]=p[e1];
				p[e1]=te;
				e1--;
			}
			cout<<"\nArray after reverse:\t";
			for(int i=0;i<5;i++)
			{
				cout<<"\t"<<p[i];
			}
			
		}
};
int main()
{
	int a[5];
	char ch[100];
	cout<<"Enter values in string:";
	gets(ch);
	cout<<"\nEnter lelments in array:";
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	String str;
	str.setvalue(ch,a);
	str.rev();
	Array a1;
	a1.setvalue(ch,a);
	a1.rev();
	
}

