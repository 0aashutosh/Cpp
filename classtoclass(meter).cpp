#include<iostream>
using namespace std;
class dist{
	private:
		int km;
		int m;
		
	public:
		dist(int x,int y)
		{
			km=x;
			m=y;
		}
		int getMeter()
		{
			int totalMeter=(km*1000)+m;
			return totalMeter;
		}
	
	
};
class meter{
	private:
		int m;
		
	public:
		void operator=(dist obj)
		{
			m=obj.getMeter();
		}
	
		void display()
		{
			cout<< "Input in Total meter is: "<<m<<endl;
		}
};

int main()
{
	int km,m;
	cout<<"Enter kilometer: ";
	cin>>km;
	cout<<"Enter meter: ";
	cin>>m;
	dist obj1(km,m);
	meter obj2;
	obj2=obj1;
	obj2.display();
	return 0;
}
