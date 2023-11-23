#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   
    double x = 0;
    double y = 0;
    //double eps = 1e-9;
    
    cin>>x>>y;
    
    bool inside = y <= -3.*x - 1;
    
    if (inside)
    {
       std::cout<<"Inside"<<'\n';
     }
       else std::cout<<"Outside"<<'\n';

        return 0;
    }






















