#include<iostream>
using namespace std;
class abstractemployee{
	virtual void askforpromotion()=0; 

};
class employee
{
	private:
		string name;
		string company;
		int age;
	public:

		void intro()
		{
			cout<<name<<" works in "<<company<<" and is "<<age<<" years old ."<<endl; 
		}
		employee(string Name , string Company , int Age)
		{
			name=Name;
			company=Company;
			age=Age;
		}
		void setName(string Name)
		{
			name = Name;
		}
		string getName()
		{
			return name;
		}
		void askforpromotion()
		{
			if (age > 30)
				std::cout << name <<"got promoted!" << std::endl;
			else
				std::cout << name << "; sorry NO promotion for you!" << std::endl;
		}

};
class Developer: employee {
public:
string FavProgrammingLanguage;
Developer(string name, string company, int age, string favProgrammingLanguage)
:employee(name, company, age)
{
FavProgrammingLanguage = favProgrammingLanguage;
}
		void coder()
		{
			cout<<getName()<<"likes to code in "<<FavProgrammingLanguage<<endl; 
		}
};
class boy // feeding user input 
{public:
	int age;
	string name;
	 void setvalues()
	{
	cout<<"enter age";
	cin>>age;
	cout<<"enter your name";
	cin>>name;
	}
		void intro()
		{
			cout<<name<<"  is "<<age<<" years old ."<<endl; 
		}
};
int main()
{
employee e1( "prashant","amazon",18);
e1.intro();
e1.askforpromotion();
Developer d = Developer("Saldina", "YT-CodeBeauty", 25, "C++");
d.coder();
boy b1;
b1.setvalues();
b1.intro();
}
