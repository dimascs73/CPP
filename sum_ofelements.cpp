#include <iostream>
#include <vector>

using namespace std;

 class Solution {
public:
    bool isPalindrome(int x) {
    int reverse = 0;
    int ch_num = x;
    bool result = true;
//    vector <int>Sc{};

    
    /* while (x > 0)
    {
        Sc.push_back(x%10);
        x /=10;
    } */
    
    if (x < 0)
    {
        result = false;
        cout <<"false";
        return result;

    }
    else {
    while (ch_num > 0)
    {
        reverse = reverse*10 + ch_num % 10;
        ch_num /=10;
    }


    /* for (int i = 0, k =  Sc.size() - 1; i < Sc.size()/2 && k >= Sc.size()/2 ; ++i, --k){
        
    if (Sc[i] == Sc[k])
    {
    result = true;
    continue;
    }
    else result = false;
    break;
             
    };
 */
    x = x - reverse;
    if (x  == 0)
    {
    cout <<"true";
    }
    else cout <<"false";
    result = false;
    }
    return result; 
    }
}; 



int main(){

int num = 11322311;

Solution S;

S.isPalindrome(num);
  
return 0;

}