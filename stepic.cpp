#include <iostream>
#include <vector>
#include <algorithm>

using std::vector;



class Solution {
public:
    vector<int> twoSum1;
    vector<int> twoSum(vector<int>& nums, int target) {
    for (int i = 0; i < nums.size(); ++i)
    {    for (int k = 0 ; k < nums.size(); ++k)
    {
            if (i != k){
            if (nums[i] + nums[k] == target)
            {   
                twoSum1.push_back(i);

            }           
        }
        }            
    }
             
    for (auto& i : twoSum1)
    {
        std::cout<<i<<" ";
    }
 
     return twoSum1;
    }
};

int main()
{
    vector<int> C{3,2,4};
    int number{6};
    
    Solution Sum;

    Sum.twoSum(C, number);   
    
    return 0;
}
