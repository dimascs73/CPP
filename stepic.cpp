#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   double x, y;

   cin>>x>>y;

   double y_big = x + 7;
   double y2_small = x - 2;

   if ((x >= -7 && x <= 0) && (y >= 0 && y <=7) && (y <= y_big))
   {
        cout<<"Inside";
   }
    else if ((x >= 0 && x <= 2) && (y >= -2 && y <= 0) && (y >= y2_small))
   {    
        cout<<"Inside";
   }
   else {cout<<"Outside";}

    return 0;
}
