#include <iostream>
#include <cmath>
#include <vector>
#include <ranges>
#include <string>
#include <algorithm>
#include <windows.h>

using std::vector;
using std::string;

class Solution {
public:
    int strStr(string S, string a) {
        auto result = std::search (S.begin(), S.end(), a.begin(), a.end());
    if ((result - S.begin()) >= S.size()){
    return -1;}
    else 
    return (result - S.begin());
    }   
};

int main(int argc, char const *argv[])
{
    string S{"sadbutsad"};
    string a{"sad"};

    Solution A;

    std::cout<<A.strStr(S, a);

    return 0;
}
