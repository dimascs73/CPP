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
    string longestCommonPrefix(vector<string>& S) {
    if (S.size() == 0 ) return "";
    string a = S[0];
    string res{};
    
    for (int i = 1; i < S.size(); i++)
    {
        while (S[i].find(a) != 0)
        {
            a = a.substr(0, a.size() - 1);
            if (a.empty()) return "";
        }
        
    }
    return a;
    }
};



int main()
{
    vector<int> nums {1,2,4,5,7};
    vector<string> value{"flower", "flower", "floowt"};
    
    string substr_first = value[0];

    auto res = value | vu::filter([](string n) { 
                         return n.contains("flower");});
                          
    
    for (auto n: res){
        std::cout<<n<<" ";
    }

    Solution Sm;
    std::cout<<Sm.longestCommonPrefix(value);    
      
   
    return 0;
}
