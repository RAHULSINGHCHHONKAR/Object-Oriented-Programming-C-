#include<iostream>
using namespace std;
class alpha{
	private:
		int a1;
	public:
     alpha(int arg=0)
		{a1=arg;}
		friend class beta;
};
class beta{
	private:
		int b1;
	public:
		beta(int arg=0)
		{b1=arg;}
	int sum()
	{
		alpha obj (3);
		int sum =obj.a1 + b1;
		return sum;
	}
};
int main()
{
beta obj(7);
cout<<"sum is "<<obj.sum()<<endl;
}
