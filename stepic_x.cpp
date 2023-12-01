#include <iostream>
#include <vector>
#include <algorithm>

int main(){

  using std::vector;
  

  int i;
  int k;
  int s;
  int a;
  int b;
  int c;

  for (i = 1; i < 10; i++)
  {
    for ( k = 1; k < 10; k++)
    {
      for ( s = 1; s < 10; s++)
      {
        a = i*100+k*10+s;
        b = i*100+s*10+k;
        c = k*100+s*10+i;
        if(a+b == c)
        {
          if (i != k && i != s && k != s)  
          
           {std::cout<<a<<'+'<<b<<'='<<c; }
        }
      }
      
    }
    
  }
 
  return 0;  
 }