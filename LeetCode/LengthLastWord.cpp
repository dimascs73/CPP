#include <iostream>
#include <string>

using std::string;


class Solution {
public:
    int lengthOfLastWord(string s) {
        
    int len = 0;

    for (auto it = s.rbegin(); it != s.rend();)
    {
        if(*it == 32){
            ++it;
            continue;
        }
        else 
        {
            while (*it != 32)
            {
                if (*it != '\0'){
                ++len;
                ++it;}
                else break;
            }
            return len;
        }
        

    }
    
    return len;

    }
};

int main(int argc, char const *argv[])
{
    string s{"arr "};

    Solution m;

    std::cout<<m.lengthOfLastWord(s);

    return 0;
}
