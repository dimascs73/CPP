#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   
    double x = 0;
    double y = 0;
    
    cin>>x>>y;
    
    bool inside = x*x+y*y <= 4*4;
    bool line1 = (x >= 0) ; 
    bool line2 = (x <= 3) ; 
    

    if (inside && line1 && line2)
      {
        std::cout<<"Inside"<<'\n';
      }
      else std::cout<<"Outside"<<'\n';
 
        return 0;
}
