#include <iostream>
#include <string>
#include <map>

using std::string;
using std::map;

class Solution {
public:
    int romanToInt(string s) {
    int res_number = 0;
    char roman_num;
        map<char, int> Roman_map;
        Roman_map['I'] = 1;
        Roman_map['V'] = 5;
        Roman_map['X'] = 10;
        Roman_map['L'] = 50;
        Roman_map['C'] = 100;
        Roman_map['D'] = 500;
        Roman_map['M'] = 1000;
        
    res_number = Roman_map[s.back()];
for (auto i = s.size() - 1; i > 0; --i)
    {
        int n1 = Roman_map[s[i - 1]];
        int n2 = Roman_map[s[i]];
       if (n1 < n2)
       {
         res_number -= n1; 
       }
       else res_number += n1;
                
    }
   std::cout<<res_number<<std::endl;  
   return res_number;
};
    
};


int main()
{
    string rn = "MCMXCIV";

    Solution S;

    int roman = S.romanToInt(rn);

    return 0;
}
