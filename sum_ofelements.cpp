#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:

    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> value_index;
        for (int i = 0; i < nums.size(); ++i)
        {
            
            auto it = value_index.find(target - nums[i]);
            if (it != value_index.end())
            {
                return {it->second, i};
            }
            value_index[nums[i]] = i;

        }
        return{};
    }
};

int main(){

int number = 9;
vector<int> k{2, 4, 5, 8};

Solution S;

S.twoSum(k, number);

  
return 0;

}