#include<iostream>
using namespace std;

class dollar{
	private:
		int d;
		int c;
		
	public:
		void operator =(int x)
		{
			d=x/130;
			c=x%130;
			
		}
		
	void displayValue()
	{
		cout<<"Dollar = "<<d<<endl<<"cents = "<<c;
	}
};

int main()
{
	int nrs;
	cout<<"Enter nepali amount: ";
	cin>>nrs;
	dollar obj;
	obj=nrs;
	obj.displayValue();
	return 0;
}
