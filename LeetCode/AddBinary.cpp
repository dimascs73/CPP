#include <iostream>
#include <string>
#include <vector>


using std::string;
using std::vector;

class Arr
{
public:
int x;
int y;

Arr() = delete;

Arr( int& x, int& y): x(x), y(y)
{
    this->x = x;
    this->y = y;
}

void print_arr()
{
    std::cout<<x<<" + "<<y<<"\n";
}


~Arr(){}


};


int main()
{
int a = 1;
int b = 1;
vector<Arr> cll;

  
for (int i = 0; i < 5; ++i)
{
    if (a <= 1)
    {
        a++;
        b += a * b;
        cll.emplace_back(a, b);
    }
    else
    {
        a += a;
        b += a * b;
        cll.emplace_back(a, b);
    }    
 }
  
for (int i = 0; i < 5; ++i)
{
    cll[i].print_arr();
}



    return 0;
}
