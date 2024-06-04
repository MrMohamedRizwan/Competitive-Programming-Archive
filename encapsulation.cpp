#include <iostream>
using namespace std;
class MainClass
{
  public:
  int name;
  int age;
public:
  MainClass(int age,int name)
    {
      this->name=name;
      this->age=age;
    }
    public:
    void getval()
    {
      cout<<age<<endl;
      cout<<name<<endl;
    }

};

int main()
{
  // int n;
  // cin >> n;
  int age=10;
  int name=20;
  MainClass x(name,age);
  x.getval();
  cout<<x.age;

  // return 0;
}