#include<iostream>
using namespace std;

class Array
{
	private:
	int a[5];
	
	public:
	void del(int ar[],int ind)
	{
		for(int i=0;i<5;i++)
		{
			a[i]=ar[i];											//1 2 3 4 5 
		}														//0 1 2 3 4
		for(int i=0;i<5;i++)
		{
			if(a[i]==ind)
			{
				continue;
			}
			else
			{
				cout<<"\t"<<a[i];
			}
		
		}
		
		
	}
	
};
int main()
{
	Array d;
	int ar[5],ind;
	cout<<"\nEnter Elements in array:\n";
	for(int i=0;i<5;i++)
	{
		cin>>ar[i];
	}
	
	cout<<"Enter value to remove:\t";
	cin>>ind;
	d.del(ar,ind);
	
}
