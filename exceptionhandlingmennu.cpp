#include<iostream>
using namespace std;
int main()
{
	int n1,n2,res,choice;
	re:
	try{
		cout<<"Enter number 1: ";
		cin>>n1;
		cout<<"Enter number 2: ";
		cin>>n2;
		if(n1<100||n2>999 || n2<100||n2>999)
		{
			throw"Error:Both number must be in three digits";
		}
	}
	catch(const char* msg)
	{
		cout<<msg<<endl;
		goto re;
	}
	cout<<"Menu"<<endl;
	cout<<"1.Add "<<endl<<"2.subtract"<<endl<<"3.divide"<<endl<<"4.Exit";
	cout<<"Enter your choice: ";
	cin>>choice;
	try{
		if(choice<1||choice>4)
		{
			throw"Error:Choice must be within 1-4";
		}
		switch(choice)
		{
			case 1:
				res=n1+n2;
				cout<<"Sum is "<<res;
				break;
			
			case 2:
				res=n1-n2;
				cout<<"Difference is "<<res;
				break;
				
			case 3:
				try{
					if(n2==0)
					{
						throw"Error:Number cannot be divided by 0";
					}
					res=n1/n2;
					cout<<"Quotient is "<<res;
				}
				
				catch(const char* msg)
				{
					cout<<msg<<endl;
				}
				break;
			case 4:
				cout<<endl<<"Thank you for your time!";
				exit(0);
		}
	}
	catch(const char* msg)
				{
					cout<<msg<<endl;
				}
	return 0;
}
