#include <iostream>
#include <cmath>
#include <vector>
#include <ranges>
#include <string>
#include <algorithm>
#include <windows.h>

using std::vector;
using std::string;
namespace rn = std::ranges;
namespace vu = std::views;


class Solution {
public:
    bool isValid(string s) {
      bool n = 0;
    if (s.size()%2 != 0){return n;}
    for (int i = 0, j = (s.size()-1); i < s.size()/2, j >=s.size()/2; ++i, --j){
        if ((s[j] - s[i]) == 2 || (s[j] - s[i]) == 1){n = 1; }
        else n = false;} 

    return n;
    }
};

//если первые ( то последние ), 

int main()
{
   string S = ("(){}}{");

   

   
   Solution x;

   std::cout<<x.isValid(S);
 
   return 0;
}

