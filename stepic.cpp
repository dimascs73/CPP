#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   
    double x = 0;
    double y = 0;
    //double eps = 1e-9;
    
    cin>>x>>y;
    
    bool down_line = y >= -.6*x - 1;
    bool up_line = y <= 1.*x/4 + 1 ;
    
   // double a = -.6*x - 1 ;
   // double b = 1.*x/4 + 1;

    if (down_line && up_line)
    {
       std::cout<<"Inside"<<'\n';
     }
       else std::cout<<"Outside"<<'\n';

        return 0;
    }






















