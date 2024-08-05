#include<iostream>
using namespace std;


class abc{
	private:
		int a;
		int b;
	public:// constructor should not be in private either global or not
		abc()//non parametric const.
		{//name of constructor's name is of its class
			cout<<"This is constructor"<<endl;
			a=5;
			b=10;//constructor is used to set value
		}
		
		
		void test()
		{
			cout<<"This is test";
		}
		void displaValue()
		{
			cout<<endl<<"The value of a is: "<<a;
			cout<<endl<<"The value of b is: "<<b;
		}
};

int main()
{
	abc obj;//constructor is called here where object is created
	abc o,b,n;//everytime object is made ,constructor is made
	obj.test();
	obj.displaValue();
	return 0;
	
}
