#include <iostream>
#include <string>

using std::string;

class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int len = 1;
        if ((sentence.find(searchWord) == string::npos)) {return -1;}
        if (sentence.find(searchWord) == 1 && sentence[0] == searchWord[0]) {return len;}
        
        for (int i = 1; i < sentence.size(); ++i){

            if (sentence[i - 1] == 32 && sentence[i] != searchWord[0])
            {
              ++len;
                
            }
                        
        }
        
      std::cout<<sentence.find(searchWord)<<std::endl;  
      return len;  
    }
};



int main(int argc, char const *argv[])
{
    string m{"pillow love winstontang i pillow corona you errichto love"};
    string k{"pi"};

    Solution S;

    int r = S.isPrefixOfWord(m, k);

    std::cout<<r;


    return 0;
}
