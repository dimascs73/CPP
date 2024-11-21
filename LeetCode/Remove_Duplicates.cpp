#include <iostream>
#include <vector>
#include <algorithm>

using std::vector;
using std::unique;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    int j = 1;
    for (int i = 1; i < nums.size(); ++i){
        
        if (nums[i - 1] != nums[j]){
            nums[j] = nums[i];
            ++j;
        }
        }
        return j; 
    }  
    
};

int main()
{
    vector<int> new_vec{0,0,1,1,1,2,2,3,3,4};
    


    Solution vk;

    vk.removeDuplicates(new_vec);



    return 0;
}
