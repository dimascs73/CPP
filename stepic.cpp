#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   
    double x = 0;
    double y = 0;
    //double eps = 1e-9;
    
    cin>>x>>y;
    
    bool up_line = y <= -1.5*x + 7;
    bool down_line = y >= -.5*x + 1;
    bool up_line1 = y <= 1.5*x + 1;
    bool down_line1 = y >= .5*x - 1;
    
  //  double a = 1.5*x + 1;
    double b = x + 2;

    if (down_line && up_line && up_line1 && down_line1)
    {
       std::cout<<"Inside"<<'\n';
     }
       else std::cout<<"Outside"<<'\n';

        return 0;
    }






















