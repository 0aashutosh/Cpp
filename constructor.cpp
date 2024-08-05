#include<iostream>
using namespace std;


class abc{
	public:// constructor should not be in private
		abc()
		{
			cout<<"This is constructor"<<endl;
		}
		
		void test()
		{
			cout<<"This is test";
		}
};

int main()
{
	abc obj;
	obj.test();
	return 0;
	
}
