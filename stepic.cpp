#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   
    int a;
    int b;
    int c;
    int d;
    int e;
    int count = 0;
    
    cin>>a>>b>>c>>d>>e;
    
    int i = a/10;
    int z = a%10;
    
    if (i%2 !=0 && z%2 !=0)
    {
        count +=a;
    }
    i = b/10;
    z = b%10;
    
    if (i%2 !=0 && z%2 !=0)
    {
        count +=b;
    }
    i = c/10;
    z = c%10;
    if (i%2 !=0 && z%2 !=0)
    {
        count +=c;
    }
    i = d/10;
    z = d%10;
    if (i%2 !=0 && z%2 !=0)
    {
        count +=d;
    }
    i = e/10;
    z = e%10;
    
    if (i%2 !=0 && z%2 !=0)
    {
        count +=e;
    }
   
    cout<<count;
    
        return 0;
}
