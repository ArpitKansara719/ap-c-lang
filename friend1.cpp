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
		void display(a &obj1)
		{
			cout<<obj1.x;
		}
};
int main()
{
	a obj1;
	b obj2;
	obj2.display(obj1);
	return 0;
}