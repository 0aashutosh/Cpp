//WAP following below steps
//		1.use parameterized constructor to create obj1 
//			and set its only data member to the user given value
//		2.now make object to by using copy constructor on obj1
//		3.now use operator overloading concept on pre mode to 
//			find the quotient remaining after the data member is divided by 3
//		4. now use operator overloading concept on postmode to find whether the quotient is even or odd
#include<iostream>
using namespace std;
 class Num{
 	private:
 		int a;
 		int f;
 		int r;
 		public:
 			Num(int x){
 				a=x;
			 	cout<<"param called";
			 	cout<<a;
			 }
			 Num(Num &y)
			 {
			 	a=y.a;
				cout<<"copy called";
			 	cout<<a;			 }
			 void operator ++()
			 {
			 	 f=a/3;
			 	 cout<<"Value of F "<<f;			 }
			 void operator ++(int)
			 {
			 	r=f%2;
			 	if(r==0){
			 		cout<<"the number"<<f<<" is even"<<endl;
			 		
				 }
				 else{
				 	cout<<"the number"<<f<<" is odd"<<endl;
				 }
			 }
 			
 };
 int main()
 	{
 	
 	int m;
 	cout<<"enetr a default value: ";
 	cin>>m;
 	Num obj(m);
 	Num obj2(obj);
 	++obj2;
 	obj2++;//passing of object not m(variable
 	return 0;
 }
