#include <iostream>
#include <vector>
#include <algorithm>
#include <ranges>

using std::vector;
namespace ranges = std::ranges;
namespace views =  std::views;

class Solution {
public:
    int sq_sort(vector<int>& nums) {


        auto srt = nums | views::transform([](int a) {return a = abs(a);})
                        | views::transform([](int a) {return a*a;});
   
                        

    for (auto v : srt){
        std::cout<<v<<" ";
    }
        return 0;
    }  
    
};

int main()
{
    vector<int> new_vec{-5, -4, -2, 1, 3, 8};
    
        
    Solution S;

    S.sq_sort(new_vec);




    return 0;
}
