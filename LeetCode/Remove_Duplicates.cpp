#include <iostream>
#include <list>
#include <vector>
#include <array>
#include <algorithm>

using std::vector;
using std::list;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size_array = nums.size();
        list<int> temp;
        for (int i = 0; i < nums.size(); ++i){
            temp.push_back(nums[i]);
        }
        temp.sort();
        temp.unique();
        size_array -= temp.size();
        return size_array;       
    }
};

int main()
{
    vector<int> new_vec{1,1,2,3,3};
    
    //Solution vk;

    //vk.removeDuplicates(new_vec);
    int vector_size = new_vec.size();

    list<int> temp;
    for (int i= 0; i < new_vec.size(); ++i ){
        temp.push_back(new_vec[i]);
        }
    temp.sort();
    temp.unique();
    vector_size -= temp.size();

    for(auto k: temp){
            std::cout<<k<<" ";
        }
    std::cout<<"\n"<<vector_size;

    return 0;
}
