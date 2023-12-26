#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <cstdlib>


int main()
{
    using std::vector;
    using std::string;
    
    string a;
    string b;
    long long n = 0;
    long long m = 0;


     std::cin>>a>>b;

     if (a.size() > b.size())
     {
        std::cout<<a<<'\n'<<b;
     }
     else if (b.size() > a.size())
     {
        std::cout<<b<<'\n'<<a;
     }
     else if (a.size() == b.size())
     {
        n = std::stoll(a);
        m = std::stoll(b);
        if (n > m)
        {
            std::cout<<a<<'\n'<<b;
        }
        else std::cout<<b<<'\n'<<a;
     }
     
     
        

    return 0;
}