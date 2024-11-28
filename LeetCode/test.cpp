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
   string S{"sadbutsad"};
   string a{"mad"};
   //vector<string>::iterator it; 

   


    auto result = std::search (S.begin(), S.end(), a.begin(), a.end()); result != S.end();
    std::cout<<std::endl;
    if ((result - S.begin()) >= S.size()){
    std::cout<<-1;}
    else {
    std::cout<<std::endl;
    std::cout<<result - S.begin();
    }
    
    
    /* for (auto n: ru){

        std::cout<<n<<" ";
    } */

   return 0;
}

