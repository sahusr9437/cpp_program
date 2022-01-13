#include <iostream>
using namespace std;

class Arithmetic 
{
	private:
		int a,b;
	public:
	//constructor is created
	Arithmetic(int num1,int num2)
	{
		a = num1;
		b = num2 ;
	}
	//function to add two number
	int add()
	{
		return a+b;
	}
	//function to subtract two number
	int subtract()
	{
		return a-b;
	}
};
int main()
{
	//declare variables
	int num1,num2;
	//take 2 input
	cout<<"Enter two number:  ";
	cin>>num1 >>num2;
	cout<<endl;
	//decare the object of Arithmatic clas
	Arithmetic obj1(num1,num2);
	cout<<"Addition of two given number is  "<<obj1.add()<<endl;
	cout<<"Subtraction of two given number is  "<<obj1.subtract()<<endl;
	return 0;
}
