#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>

int main()
{
    std::vector<int> v;
    int a = 0;

    using namespace std;

    std::cin>>a;
    srand(time(NULL));

    v.reserve(a);

    for (int i = 0; i <a-1; i++)
    {
        v.push_back(rand()%1000);
    }
 auto start = chrono::steady_clock::now();

 std::sort (v.begin(), v.end());

 auto end = chrono::steady_clock::now();
 auto diff = end - start;

 std::cout << (chrono::duration <double, milli> (diff).count())*0.001 << " s" << endl;


    return 0;
}
