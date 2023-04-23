#include<iostream>
using namespace std;
class Circle
{
	protected:
	float radius;
	public:
	void setRadius(float r)
	{
			radius=r;
	}
};
class Area:public Circle
{
	public:
		void calArea()
		{
			cout<<"\nArea of circle is:\t"<<radius*radius*3.14f;
		}
};
int main()
{
	Area a;
	a.setRadius(7);
	a.calArea();
}
