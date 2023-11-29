#include <iostream>



int main() {
  
  int a = 0;
  int b = 0;
  int sum = 0;
  

  std::cin>>a>>b;

  for (int i = a; i < b+1; i++)
  {
     sum +=i;   
  }
  std::cout<<sum<<std::endl;
  
  return 0;
}