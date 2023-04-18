#include<iostream>
using namespace std;
template <typename T> T Max(T x , T y )
{
  return (x>y)?x:y;
}
int main()
{
  cout<<"bigger number is" << Max<int>(5,6) <<endl;
}
