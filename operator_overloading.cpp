#include<iostream>
using namespace std;
#include<string>
class boy
{
	private:
		int weight;
	public:
		boy(int x=0)
		{
			weight=x;
		}
	boy operator+( boy obj){
		boy temp;
		temp.weight=weight+obj.weight;
		return temp;
	}
	boy operator-( boy obj){
		boy temp;
		temp.weight=weight-obj.weight;
		return temp;
	}
	void operator ++()
	{
		++weight;
	}
	void display(){
		std::cout<<"weight is "<<weight<<std::endl;
	}
	friend bool operator>(boy x , boy y);
	friend bool operator<(boy x , boy y);
};
	bool operator>(boy x , boy y)
{
	return x.weight>y.weight;
}
	bool operator<(boy x , boy y){
		return x.weight< y.weight;
	}

int main()
{
	int w1,w2;
	cout<<"enter rohit's weight"<<endl;
	cin>>w1;
	cout<<"enter Rahul's weight"<<endl;
	cin>>w2;
	boy Rohit(w1);
	cout<<"Rohit's ";
	Rohit.display();
	boy Rahul(w2);
	cout<<"Rahul's ";
	Rahul.display();
	if(Rahul>Rohit)
	{
		cout<<"Rahul is heavier"<<endl;
	}
	else if (Rahul<Rohit){
		cout<<"Rohit is heavier"<<endl;
	}
	boy total=Rahul+Rohit;
	boy diff=Rahul-Rohit;
    cout<<"total ";
    total.display();
	cout<<"difference in ";
	diff.display();
	++diff;
	cout<<"inceremented ";
	diff.display();
}
