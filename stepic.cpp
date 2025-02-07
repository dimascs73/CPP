#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using std::vector;
using std::string;

string s_wap (string& x, string& y){
    string* xx = &x;
    string* yy = &y;
    string c = *xx;
    x = *yy;
    y = std::move(c);

    return x;
    return y;

}


int main()
{
    string a{"abc"};
    string b{"xyz"};

    std::cout<<a<<" "<<b<<'\n';

    s_wap(a, b);

    std::cout<<a<<" "<<b<<'\n';
    
    return 0;
}
