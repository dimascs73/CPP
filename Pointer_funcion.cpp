#include <iostream>

int Maximun (int a, int b, int &c)
{
        if (a > b) {
            c = a;
        }
        else
        {
            c = b;
        }
        
    return c;
}

int Minimum (int a, int b, int &c)
{
          if (a < b) {
            c = a;
        }
        else
        {
            c = b;
        }
        
    return c;  

}

void Print (int &c)
{
    std::cout<<"Your number is:"<<c;
}


int main()
{
    int a = 0;
    int b = 0;
    int c = 0;

    std::cout<<"Enter two numbers:";
    std::cin>>a>>b;

    int (*ptr)(int, int, int&) = Minimum;

    c = ptr(a, b, c);


    Print (c);





    return 0;
}
