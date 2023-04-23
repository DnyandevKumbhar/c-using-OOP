#include<iostream>
using namespace std;
							//6=3+2+1=6
int i,j,sum;

void perf()
{
	for(i=1;i<50;i++)
	{
		sum=0;
		for(j=1;j<i;j++)
		{
			
			if(i%j==0)
			{
				sum=sum+j;
			}
		}
		if(sum==i)
		{
			cout<<"\t"<<i;
		}
	}
		
}
int main()
{
	perf();
	   
}
