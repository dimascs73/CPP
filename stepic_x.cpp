#include <iostream>
#include <vector>
#include <algorithm>

int main(){

  using std::vector;
  

  int j;
  int u;
  int k;
  int e;
  int b;
  int c;
  int d;

  for (j = 1; j < 10; j++)
  {
    for ( u = 0; u < 10; u++)
    {
      for ( k = 0; k < 10; k++)
      {
        for (e = 1; e < 10; e++)
        {
           
           b = j*100+u*10+k;
           c = e*10+j;
           d = j*10000+j*1000+j*100+j*10+j;
          if (j != u && j != k && j != e && u != k && u != e && k != e)
           {
             if (b*c == d)
              {
               std::cout<<j<<u<<k<<'*'<<e<<j<<'='<<j<<j<<j<<j<<j; 
              }
           }
        }   
      }
      
    }
    
  }
 
  return 0;  
 }