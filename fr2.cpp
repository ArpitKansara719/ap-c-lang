#include<iostream>
using namespace std;
class b;   // froward declaration
class a
{
	int x;
	
	public : void getx(int i)
	{
		x=i;
	}
	friend void max(a,b);
};

class b
{
	int y;
	
	public: void gety(int i)
	{
		y=i;
	}
	friend void max(a,b);
};
void max(a obj1, b obj2)
{
	if(obj1.x > obj2.y)
	{
		cout<<"X is max"<<obj1.x;
	}
	else
	{
		cout<<"Y is max"<<obj2.y;
	}
}
int main()
{
	a obj1;
	b obj2;
	obj1.getx(10);
	obj2.gety(20);
	max(obj1,obj2);
	return 0;
}
