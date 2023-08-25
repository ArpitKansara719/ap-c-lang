#include<iostream>
using namespace std;

class a
{
	int x=5;
	friend class b;
};

class b
{
	public : 
		void display(a &obj)
		{
			cout<<"Value of x is "<<obj.x;
		}
};
int main()
{
	a obj;
	b obj1;
	obj1.display(obj);
	return 0;
}