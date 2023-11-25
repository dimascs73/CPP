#include <iostream>


int push_back(int* ar, int &b, int sz) 
{
        int index = 0;
        while (index < sz)
        {
            std::cout<<"Enter numbers:";
            std::cin>>b;
            ar[index] = b;
            index++;
        }
   return *ar;
}
void sort (int* s_rt, int sz2)
{
    int min = 1'000'000'000;
    while (s_rt[0] != min)
    {
        for (int i = 0; i < sz2-1; i++)
    {
        

        if (s_rt[i] > s_rt[i+1])
        {
            int tmp = s_rt[i+1];
            s_rt[i+1] = s_rt[i];
            s_rt[i] = tmp;
        }
        if (s_rt[i] < min)
        { min = s_rt[i];}         
    }
    }
}   

int main()
{
    int size = 5;
    int array [size];
    int a = 0;

push_back(array, a, size);

sort (array, size);

for (int x: array)
{
    std::cout<<x<<'\t';
}

std::cout<<std::endl;


    return 0;
}
