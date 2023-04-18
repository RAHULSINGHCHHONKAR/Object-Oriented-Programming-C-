#include<iostream>
using namespace std;
class person{
	public:
		virtual void give()=0; //pure virtual function
};
 class boy: public person{
	 public:
		 void give()
		 {
			 cout<<"brown bun";
		 }
 };
 class girl: public person{
	 public:
		 void give()
		 {
			 cout<<"pink bun";
		 }
 };
 
int main()
{
	boy b1;
	girl g1;
	person *ptr=NULL;
	ptr=&b1;
	ptr->give();
	ptr=&g1;
	ptr->give();
}
