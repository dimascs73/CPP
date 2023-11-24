#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   
    double x = 0;
    double y = 0;
    //double eps = 1e-9;
    
    cin>>x>>y;
    
    bool down_line = y >= -3.*x/5 - 5;
    bool up_line = y <= -1.*x/3 + 3;
    
    if (down_line && up_line)
    {
       std::cout<<"Inside"<<'\n';
     }
       else std::cout<<"Outside"<<'\n';

        return 0;
    }






















