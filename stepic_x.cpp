#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   
    double x = 0;
    double y = 0;
    
    cin>>x>>y;
    
    bool inside = x*x+y*y > 3*3;
    bool outside = x*x+y*y <= 5*5;
    bool line1 = (x >= 0 && y >= 0) ; 
    bool line2 = (x <= 0 && y <= 0) ; 
    

    if ((inside && outside && line1) || 
        (inside && outside && line2))
      {
        std::cout<<"Inside"<<'\n';
      }
      else std::cout<<"Outside"<<'\n';
 
        return 0;
}
