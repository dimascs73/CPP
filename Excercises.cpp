#include <iostream>
#include <string>

class Children
{
private:

  std::string first_name;
  std::string last_name;
  int age;

public:

std::string get_FirsttName() const
  {
    return first_name;
  }
std::string get_LasttName() const
  {
    return last_name;
  }

int get_Age() const
  {
    return age;
  }

  /* template <typename T>
  T get_Data(T a) const
  {
    return a;
  } */
  

  void Set_Data(std::string first_name, std::string last_name, int age)
  {
    this -> first_name = first_name;
    this -> last_name = last_name;
    this -> age = age;
  }
  void PrintData()
  {
    std::cout<<first_name<<"  "<<last_name<<"  "<<age<<'\n';
  }
};

int main()
{
  Children ch1;
  Children ch2;

  ch1.Set_Data("Martin", "McFly", 26);
  ch2.Set_Data("Dima", "Skus", 51);

  ch1.PrintData();

  ch2.PrintData();
  
  return 0;
}
