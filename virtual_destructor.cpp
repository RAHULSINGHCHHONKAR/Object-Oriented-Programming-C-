#include<iostream>
using namespace std;
class base{
	public:
		virtual~base()  // class base has to become virtual otherwise only base class will be destroyed 
		{
			cout<<"base class destroyed ";
		}

};

class derived : public base
{
public:
	~derived()
	{
		cout<<"Derived class Destroyed";
	}
};
int  main()
{
	base* b1 = new derived;
	delete b1;
}
