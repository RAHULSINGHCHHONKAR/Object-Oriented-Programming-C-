#include<iostream>
using namespace std;
class boy
{
	public:
		string name;
    
		int age;
	/*boy(string Name,int Age) // parameterrized  constructor
	{
		name=Name;
		age=Age;
	}*/
	boy(string aname="Null",int aage=0) // overloaded constructor
	{
		name=aname;
		age=aage;
	}
	void intro(){
		cout<<name<<" is " <<age<<" years old  "<<endl;
	}
 string getname() //getter
	{
		return name;
	}
};
class son :  boy{
	public:
		string school ;
		string name;
		int age;
		void setschool()
		{
			cout<<"enter the name of the school "<<endl;
			getline(cin,school);
		}
		son(string Name, int Age, string School)
			:boy(name,age)
		{
			name=Name;
			age=Age;
			school=School;
		}
		
		void intro()
		{
			cout<<getname()<<" is " <<age<< " years old and is studying in "<<school<<endl;
		}
	
};
int main()
{
	boy b1("Rahul",18);
cout<<b1.getname();
son s1("prashant",18,"vidyagyan");
s1.intro();
son s2(s1); //copy constructor 
s2.intro();
son s3;
s3.setschool();
}
