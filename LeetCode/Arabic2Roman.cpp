#include <iostream>
#include <map>
#include <string>
#include <unordered_map>
#include <ranges>
#include <cmath>
#include <array>

using std::unordered_map;
using std::string;
using std::array;


class Solution {
public:
    string intToRoman(int num) {
    array<int, 13> arabic {1000, 900, 500, 400, 100, 90,  50, 40, 10, 9,  5, 4, 1};
    array<string, 13> roman {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    string answer= "";
    answer.reserve(30);
    int max = arabic[0];
    int a = num;
    int i = 0;
        while(a != 0){
        if (a >= max || max == 1)
        {
        answer += roman[i];
        a -= max;
        continue;
        }
        else if (a < max && arabic[i] > 1) {
        ++i;
        max = arabic[i];
        }
        }
    
    return answer;
    }
    
};

int main()
{
    int a = 3799;
    Solution S;
    std::cout<<S.intToRoman(a);
    std::cout<<std::endl;
    
    return 0;
}
