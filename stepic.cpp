#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   double x, y;

   cin>>x>>y;

   double y_left = x + 6;
   double y_right = x - 3;
   double y_up = x + 5;
   double y_down = - x - 7;

   if (y >= y_left && y <= y_right && y >= y_down && y <= y_up)
   {
        cout<<"Inside";
   
   }
   else {cout<<"Outside";}

    return 0;
}
