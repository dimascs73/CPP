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
vector<int> m;
unordered_map<int, int> value_index;

    for (int i = 0; i < k.size(); ++i)
    {       
    auto it = value_index.find(number - k[i]);
    if (it != value_index.end())
    {
        m.push_back(it->second);
        m.push_back(i);
    }
    value_index[k[i]] = i;
    }
for (int i = 0; i < m.size(); ++i)
{
    std::cout<<m[i]<<" ";
}


  
return 0;

}