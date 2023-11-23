#include <iostream>
#include <vector>
#include <algorithm>

void Vector_array (std::vector<int> &v, int *arr, int  &sz)
{
    v.reserve(sz);

    for (int i = 0; i < sz; i++)
    {
        v.push_back(arr[i]);
        std::sort (v.begin(), v.end());
    }

    for (auto x: v)
    {
        std::cout<<x<<'\n';
    }
    
    

}


int main()
{
    int size = 5;
    int array [size] = {3, 5, 2, 4, 1};
    std::vector<int> vec;

    Vector_array (vec, array, size);


    return 0;
}
