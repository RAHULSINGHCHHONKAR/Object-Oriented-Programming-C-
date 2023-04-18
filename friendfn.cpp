#include<iostream>
class alpha{
	private:
		int a1;
	public:
		alpha(int arg=0)
		{ a1=arg;}
		friend void fun();
};
class beta{
	private:
		int b1;
	public:
		beta(int arg=0)
		{ b1=arg;}
		friend void fun();
};
void fun()
	{
		alpha a(8);
		beta b(2);
		int x=a.a1+b.b1;
		std::cout<<"sum"<<x;
	}
int main()
{
	fun();
}
