#include <iostream>

void swap (int* arr, int size);

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
    int min = 1000000000;
    while (s_rt[0] != min)
    {
        for (int i = 0; i < sz2-1; i++)
    {
        swap (s_rt, sz2);

        if (s_rt[i] < min)
        { min = s_rt[i];}         
    }
    }
}

void swap (int* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        

        if (arr[i] > arr[i+1])
        {
            int tmp = arr[i+1];
            arr[i+1] = arr[i];
            arr[i] = tmp;
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
