#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

class Product
{
	private:
	int id;
	char name[100];
	int price;
	public:
	void setData(int I,char n[],int pr)
	{
		id=I;
		strcpy(name,n);
		price=pr;
		
	}
	void getdata()
	{
		cout<<"\nProduct ID:"<<id<<"\tProduct Name:"<<name<<"\tProduct Price:"<<price<<"\n";
	}
	int getID()
	{
		return id;
	}
	char *getName()
	{
		return name;
	}
	int getPrice()
	{
		return price;
	}
	
};
int main()
{
	Product *p;
	int size,c;
	int flag=1;
	int I,pr;
	char n[100];
	cout<<"\nHow much product u required:\t";
	cin>>size;
	p=(Product *)malloc(sizeof(Product)*size);
	int i=0;
	do{

	
	cout<<"\n1.Add new product.";
	cout<<"\n2.Show record.";
	cout<<"\n2.Delete the product.";
	cout<<"\nEnter your choice:\t";
	cin>>c;

	switch(c)
	{
		case 1:
		
		if(i==0)
		{
			printf("Enter the product id,name and price:\t");
			cin>>I>>n>>pr;
			p[i].setData(I,n,pr);
			i++;					
		}
		else
		{
			printf("Enter the product id,name and price:\t");
			cin>>I>>n>>pr;
			for(int j=1;j<size;j++)
			{
				if(I==p[j].getID())
				{
					cout<<"\nID already present.";
					
				}
				else
				{
				//	printf("Enter the product id,name and price:\t");
				//	cin>>I>>n>>pr;
					p[j].setData(I,n,pr);
				}	
			}
		}				
		break;
		case 2:
			for(int j=0;j<size;j++)
			{
				p[j].getdata();
			}
		break;
		case 3:
			int d;
			cout<<"\nEnter ID for delete item:\t";
			cin>>d;
			for(int j=0;j<size;j++)
			{
				if(d==p[j].getID())
				{
					p[j+1]=p[j];
				}
			}
		
			
		break;
		
	}
	}
	while(flag);
	
	return 0;
}
