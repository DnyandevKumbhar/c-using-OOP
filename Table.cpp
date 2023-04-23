#include<iostream>
using namespace std;

class Table
{
	private:
		int no;
	public:
		
	void setValue(int a)
	{
		no=a;
		cout<<"Enter Number \n";
		cin>>no;
	}
	void showTable()
	{
		int i=1;
		while(i<=10)
		{
			
			cout<<no<<"X"<<i<<"--->\t"<<no*i<<"\n";
			i++;
		}
	}
};
int main()
{
	int a;
	Table t;
	t.setValue(a);
	t.showTable();
	
}
