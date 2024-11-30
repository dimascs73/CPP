#include <iostream>
#include <vector>
#include <ranges>

using std::vector;
namespace rn = std::ranges;
namespace vu = std::views;


class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if (nums.size() == 1 && nums[0] == val)
        {
            return 0;
        }
        else if (nums.size() == 1 && nums[0] != val)
        {
            return 1;
        }
        int size = nums.size();
        auto res = nums | vu::filter([val] (int n) {return n != val;});         
        
        int k = 0;
        vector<int> op;
        for (int a : res){
        ++k;
        op.push_back(a);     
        }
        if (k == 0){return 0;}
        
        nums.clear();

        for (int i = 0; i < size; ++i){
            if(i < k){
            nums.push_back(std::move(op[i]));
            }
            else nums.push_back(val);
        }       
    return k;  
    }
};

int main()
{
    vector<int> c{2,4,4,4,0};
    int x = 4;

    
    Solution M;

    M.removeElement(c, x);

    for(auto& n: c){
        std::cout<<n<<" ";
    }


    return 0;
}
