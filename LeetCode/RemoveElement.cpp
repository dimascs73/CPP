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
        auto res = nums | vu::filter([val] (int n) {return n != val;});
                 
        int k = 0;
        for (int a : res){
        ++k;     
        }
        if (k == 0){return 0;}
        
        int tmp = 0;
        int i = 0;
        int j = (nums.size() - 1);
        while ( i <= j )
        {
            if (nums[i] == val && nums[j] != val){
                tmp = nums[i];
                nums[i] = nums[j];
                nums[j] = tmp;
                ++i;
                --j;
            }
            else if (nums[i] == val && nums[j] == val){
                tmp = nums[i];
                nums[i] = nums[i+1];
                nums[i+1] = tmp;
            }
            else if (nums[i] != val && nums[j] == val){
                --j;
            }
             else if (nums[i] != val ){
                 ++i;
            }
            else {
                ++i;
                --j;}

        }

    return i;  
    }
};

int main()
{
    vector<int> c{2,2,3};
    int x = 2;

    
    Solution M;

    M.removeElement(c, x);

    for(auto& n: c){
        std::cout<<n<<" ";
    }

    return 0;
}
