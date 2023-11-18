#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   double x, y;

   cin>>x>>y;
  
  double y1 = x+6;
  double y2 = -x+5;
  double y3 = x-3;
  double y4 = -x-7;
   
   if (((x <= y1) && (x >= y4) && (x <= y2 )) || ((x >= y3) && (x <= y4) && (x >= y2 )))
        {cout<<"Inside";}
    
    
   else {cout<<"Outside";}

    return 0;
}
