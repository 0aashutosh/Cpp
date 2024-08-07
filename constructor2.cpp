#include<iostream>
using namespace std;

class KIST{
	private:
		int a;
		int b;
		
	public:
	KIST()
	{
		a=80;
		b=900;
	}
	KIST(int x, int y)
	{
		a=x;
		b=y;
	}
	
	void displayvalue()
	{
		cout<<"a="<<a<<" &  b="<<b;
	}
};
int main()
{
//	KIST obj1;
//	KIST obj2;
	int m=70,n=800;
	KIST obj3(m,n);
	
//	obj1.displayvalue();
	obj3.displayvalue();
	return 0;
}
