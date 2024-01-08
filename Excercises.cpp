#include <iostream>
#include <string>

class Children
{
private:

  std::string first_name;
  std::string last_name;
  int age;

public:

  void Set_Data();
  
  void PrintData();
};


void Children::Set_Data()
{
  std::cout<<"Enter First Name: ";
  std::cin>>first_name;
  std::cout<<"Enter Last Name: ";
  std::cin>>last_name;
  std::cout<<"Enter Age: ";
  std::cin>>age;

}

void Children::PrintData()
{
 std::cout<<first_name<<"  "<<last_name<<"  "<<age<<'\n';
}

int main()
{
  Children ch1;
  Children ch2;

  ch1.Set_Data();

  ch2.Set_Data();

  ch1.PrintData();

  ch2.PrintData();
  
  return 0;
}
