#include<iostream>
using namespace std;
class boy{
  public:
  string name;
  int age;
  protected:
  string city;
  public:
  boy(string Name, int Age,string City){
  name=Name;
  age=Age;
  city=City;
  }
  void intro(){
    cout<<name<<" is "<< age<<" years old "<<" and is lives in "<<city<<endl;
  }
};

class student : public boy{
  public:
    int year;
    student(string Name, int Age, string City, int Year):
  boy(Name,Age,City)
  {
         year=Year;
    }
  void intro(){
    cout<<name<<" is "<< age<<" years old "<<" and is lives in "<<city<<" and is in  college since "<< year<<" years"<<endl;
  }
}; 
int main()
{
  boy angad("angad",18,"manauli");
  angad.intro();
  student rahul("Rahul",20,"Mathura",2);
  rahul.intro();
}

