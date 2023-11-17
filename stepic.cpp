#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   double x, y;

   cin>>x>>y;

   
   if ( ((x >= -6.5 && x <= -0.5) && (y >= -0.5 && y <= 5.5)))
    {
    if ((x >= -2 && x <= 4) && (y >= -5 && y <=1)) 
     {
      if ((x >= -6.5 && x <= -2) && (y <= -0.5 && y >= -5))
      {
        if ((x >= -0.5 && x <= 4) && (y <= 1 && y >= 5.5))
        {cout<<"Inside";}
      } 
     }
    }
   else {cout<<"Outside";}

    return 0;
}
