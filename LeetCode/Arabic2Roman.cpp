#include <iostream>
#include <unordered_map>
#include <string>

using std::unordered_map;
using std::string;


class Solution {
public:
    string intToRoman(int num) {
     unordered_map<int, string> roman;
        roman[1] = 'I',
        roman[2] = "II",
        roman[3] = "III",
        roman[4] = "IV",
        roman[5] = 'V',
        roman[6] = "VI",
        roman[7] = "VIII",
        roman[9] = "IX",
        roman[10] = 'X',
        roman[40] = "XL",
        roman[50] = 'L',
        roman[90] = "XC",
        roman[100] = 'C',
        roman[400] = "CD",
        roman[500] = 'D',
        roman[900] = "CM",
        roman[1000] = "M";

    int thousants = num / 1000;
    int hundreds = (num / 100) % 10;
    int decs = (num / 10) % 10;
    int ones = num % 10;

    if (num > 1000)
    {
        thousants*1000;
    }
    

    }
};

int main()
{
    
    return 0;
}
