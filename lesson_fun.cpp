#include <iostream>

using namespace std;

void Fun (int &a, int &b)
{
    int i = 0;

    if (a > b)
    {
        i = a - b;

    }
    else if (a < b)
    {
        i = b - a;
    }
    
    cout<<"Sum is: "<<i<<'\n';
    
}

void Fun (double &a, double &b)
{
    cout<<"Devide "<<a<<"/"<<b<<" = "<<a/b<<'\n';

}


void Fun (double &a, int &b)

{
    cout<<"Multiply "<<a<<"*"<<b<<" = "<<a*b<<'\n';

}

int main() {
    setlocale(LC_ALL, "Russian");

    
    int x = 5;
    int y = 7;
    double z = 5.0;
    double t = 2.0;

Fun (x , y);

Fun (z , t);

Fun (z, x);


 /*    int arr [x] = {1, 2, 3, 4, 5};
    int arr2 [x];

    for(int i =0; i < x; i++)
{
    arr2[i] = arr[i];
}

   for(int i =0; i < x; i++)
{
    cout<<"Arr_2 "<<i<<":"<<arr2[i]<<"\t Arr"<<i<<":"<<arr[i]<<'\n';
}    
 */


    return 0;

}