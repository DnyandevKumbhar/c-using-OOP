#include<iostream>
using namespace std;
class power
{
	int base,index,p=1;
	public:
	power(int base,int index)
	{
		this->base=base;
		this->index=index;
			
	}
	int getPower()
	{
		while(index!=0)
		{
			p=p*base;
			index--;
		}
		return p;
	}
};
int main()
{
	int base,index;
	cout<<"\nEnter base and index:\t";
	cin>>base>>index;
	power p1(base,index);
	int result=p1.getPower();
	cout<<"\nPower is:"<<result;
}
