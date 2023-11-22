#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   
    double x = 0;
    double y = 0;
    
    cin>>x>>y;
    
    bool inside = x*x+y*y <= 9;
    bool inside_1 = (x+3)*(x+3)+(y+3)*(y+3) < 9;
    bool inside_2 = (x-3)*(x-3)+(y-3)*(y-3) < 9;
    bool inside_3 = (x-3)*(x-3)+(y+3)*(y+3) < 9;
    bool inside_4 = (x+3)*(x+3)+(y-3)*(y-3) < 9;
    
    if (inside && !inside_1 && !inside_2 && !inside_3 && !inside_4)
    {
       std::cout<<"Inside"<<'\n';
     }
       else std::cout<<"Outside"<<'\n';

        return 0;
    }






















