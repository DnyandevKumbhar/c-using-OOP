#include<iostream>
using namespace std;
class seller
{
	int sp,cp;
	public:
	void acceptSellingCostPrice(int sp,int cp)
	{
		this->sp=sp;
		this->cp=cp;
	}
	void showprofitLoss()
	{
		if(sp>cp)
		{
			cout<<"\nSeller is in profit by:\t"<<sp-cp;
		}
		else if(cp>sp)
		{
			cout<<"\nSeller is in loss by:\t"<<cp-sp;
		}
		else if(sp==cp)
		{
			cout<<"\nSeller is in No loss No profit..";
		}
	}
};
int main()
{
	int sp,cp;
	cout<<"\nEnter selling price and cost price:\t";
	cin>>sp>>cp;
	seller s;
	s.acceptSellingCostPrice(sp,cp);
	s.showprofitLoss();
}
