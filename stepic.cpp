#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   
    double x = 0;
    double y = 0;
    //double eps = 1e-9;
    
    cin>>x>>y;
    
    bool up_line = y <= -1.5*x + 7; // справа верх
    bool down_line = y >= -.5*x + 1; // справа низ
    bool up_line1 = y >= 1.5*x + 1;  // слева верх
    bool down_line1 = y >= .5*x - 1; // слева низ
    
  //  double a = 1.5*x + 1;
  //  double b = -.5*x + 1;

    if (down_line && (up_line && y <= 0))
    {
       std::cout<<"Inside"<<'\n';
     }
       else std::cout<<"Outside"<<'\n';

        return 0;
    }






















