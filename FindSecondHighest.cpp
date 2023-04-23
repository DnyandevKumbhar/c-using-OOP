#include<iostream>
using namespace std;


class FindSH
{
	private:
	int a[5];
	public:
	
	void Fsh(int ar[])
	{
		for(int i=0;i<5;i++)
		{
			a[i]=ar[i];
		}
		
	}
	int getSh()
	{
		for(int i=0;i<5;i++)
		{
			for(int j=(i+1);j<5;j++)
			{
				if(a[i]<a[j])
				{
				int t=a[i];
				a[i]=a[j];
				a[j]=t;
				}
			}
		}

		cout<<"\nSecond Highest number is:\t"<<a[1];
	}
};
int main()
{
	FindSH f;
	int ar[5];
	cout<<"Enter five values in array:\n";
	for(int i=0;i<5;i++)
	{
		cin>>ar[i];
	}
	f.Fsh(ar);
	f.getSh();

	
}
