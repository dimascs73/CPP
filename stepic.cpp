#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   double x, y;

   cin>>x>>y;

   double y_big = x + 7;
   double y2_small = x - 2;

   if (x >= -7 && x <= 2 )
   {
        if (y >= 0 && y <= y_big)
        {
            cout<<"Inside";
        }
        if (y >= y2_small && y<=0)
        {
        cout<<"Inside";
        }
        
   }
   else cout<<"Outside";
    return 0;
}
