//Friend function using two class

#include<iostream>
using namespace std;

class b;
class a
{
	int x;
	public : void getx(int i)
	{
		x=i;
	}
	friend void sum(a,b);
};
class b
{
	int y;
	public : void gety(int i)
	{
		y=i;
	}
	friend void sum(a,b);
};
void sum(a obj1,b obj2)
{
	int c;
	
	c= obj1.x+obj2.y;
	cout<<c;
}
int main()
{
	a obj1;
	b obj2;
	obj1.getx(10);
	obj2.gety(20);
	sum(obj1,obj2);
	return 0;
}

