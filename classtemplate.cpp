#include<iostream>
using namespace std;

template<class T>//
class className{
	private:
	T sum;
	public:
		T add(T a,T b)
		{
			sum=a+b;
			return sum;
		}
};
int main()
{
	int n1=2,n2=3,sum;
	float n3=9.7,n4=5.4,sum1;
	className<int> obj;
	className<float> obj1;
	cout<<"sum int: "<<obj.add(n1,n2)<<endl;
	cout<<"Sum float: "<<obj1.add(n3,n4);
	return 0;
}

