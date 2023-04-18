#include<iostream>
using namespace std;
class person{
public:
virtual void give()
{
cout << "Bun";
}
};

class boy : public person{
	public:
void give()
{
cout << "Brown Bun";
}
};
class girl : public person{
	public:
void give()
{
cout << "pink Bun";
}
};


int main ( )

{

person* ptr;      // pointer to base class
boy b1;
ptr= &b1;         // refers to derived objects
ptr->give();
}
