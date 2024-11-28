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

int main()
{
   vector<string> S{"flower", "floor", "flood", "fl0wer",};
   string a{"flo"}; 

   string res{};
 
    auto ru = S | vu::filter([&a](string s){ return s.contains(a);});
    
    system("cls");
    
    for (auto n: ru){

        std::cout<<n<<" ";
    }

   return 0;
}

