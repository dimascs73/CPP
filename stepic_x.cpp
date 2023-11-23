#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   
    double x = 0;
    double y = 0;
    
    cin>>x>>y;
    
    bool inside = x*x+y*y <= 5*5;
    bool inside_1 = (x)*(x)+(y)*(y) < 9; // y < 0
    bool teeth = (x >= -1 && x <= 1) && (y <= -2 && y >= -3); // зубы
    bool inside_2 = (x-1.5)*(x-1.5)+(y-2)*(y-2) < 1; // правый глаз
    bool inside_4 = (x+1.5)*(x+1.5)+(y-2)*(y-2) < 1; // левый глаз

    if (y >= 0)
    {
      if (inside && !inside_2 && !inside_4 ) 
      {
        std::cout<<"Inside"<<'\n';
      }
      else std::cout<<"Outside"<<'\n';
    
    }

    else if (y < 0)
    {
      if (inside && !inside_1 || teeth) {std::cout<<"Inside"<<'\n';}
    
    else std::cout<<"Outside"<<'\n';
    }

    else std::cout<<"Outside"<<'\n';
    
        return 0;
    }
