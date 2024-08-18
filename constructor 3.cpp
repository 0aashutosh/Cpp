#include<iostream>
using namespace std;

class A{
	private:
		int x;
		int y;
	public:
		A() //Default Constructor
		{
			x=10;
			y=20;
			cout<<"Default= "<<x<<" and "<<y<<endl;
		}
		A(int a,int b) //Parameterized Constructor
		{
			x=a;
			y=b;
			cout<<"Parameterized= "<<x<<" and "<<y<<endl;
		}
	    
	    A(A &obj)//copy constructor
	    {
	    	x=obj.x;
	    	y=obj.y;
			cout<<"Copy Constructor= "<<x<<" and "<<y<<endl;
		}
		
};

int main()
{
	A obj; //when there is no parametr while creating object=Default 
	A obj1(90,100);//when there is parameter while creating object=Parameterized
	A obj2=obj1;
	 
	return 0;
	
}
