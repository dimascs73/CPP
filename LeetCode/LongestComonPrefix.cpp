#include <iostream>
#include <vector>
#include <string>
#include <ranges>

using std::vector;
using std::string;
using std::find;
namespace rn = std::ranges;
namespace vu = std::views;


class Solution {
public:
    /* string longestCommonPrefix(vector<string>& strs) {
       string Result;
       Result.reserve(201);
               
    } */
};

int main()
{
    vector<int> nums {1,2,4,5,7};
    vector<string> value{"flower", "flowor", "flowt"};
    
    string substr_first = value[0];

     auto res = value | vu::filter([](string n) { 
                         if (n.contains("flow")) {return n;}
                        });  

    /*auto res = nums | vu::filter([](int n){
                      return n ? n % 2 == 0: 9;
    });*/
    
    for (auto n: res){
        std::cout<<n<<" ";
    }
        
      
   
    return 0;
}
