#include<iostream>
#include <string>
using namespace std;
int& func1(int &i , int &j)
{
  int temp=i+j;
  int &z=temp;
  i++;
  j++;
  return j;
}
int main()
{
  int i=-2,j=10;
  int *p=&i;
  int &r=i;
  i++;   // (*p)++
  r++;
//  &r=j; can not reasssign as another reference 
  r++;
  r=j; // i=j;

int c;
int a=5,b=10;
cout<<"a is : "<<a<<endl;cout<<"b is : "<<b<<endl;cout<<"c is : "<<c<<endl;
c=func1(a,b);
cout<<"a is : "<<a<<endl;cout<<"b is : "<<b<<endl;cout<<"c is : "<<c<<endl;

}
