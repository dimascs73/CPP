#include <iostream>
#include <vector>
#include <iterator>
#include <stdint.h>

using std::cout;
using std::cin;
using std::endl;
using std::vector;


int* prime_arr (int &a, int &b){
int n;

if (a > b)
{
	 n = a;
}
else n = b;

vector<bool> resheto;
resheto.resize(n+1);

    for (int i = 2; i < resheto.size(); i++)
    {
         resheto[i] = true; //говорим что все числа у нас простые
    }
    int x = 2;
    while (x*x <= resheto.size())
    {
        if (resheto[x] == true)
        {
          for (int y = x*x; y <=resheto.size(); y+=x)
          {
            resheto[y] = false; //выявляем составные числа
          }
            
     }
    x+=1;   
    }
    int sum = 0;
    for (int i = 2; i < resheto.size(); i++)
    {
        if (resheto[i]== true)
        {
            sum ++; //вычисляем размер массива простых чисел
           
         }  
    }

    int* arr = new int[sum];
    
    int i = 2;
    int j = 0;
    while (i<=resheto.size())
        {
            if (resheto[i])
            {
            arr[j] =i;    // заполняем массив простыми числами
            
            j++;
            }
        i++;
        }

return arr;

}

int main() {

setlocale(LC_ALL, "Russian");
int x;
int y;

cout<< "Enter first number:";
cin>> x;

cout<< "\nEnter second number:";
cin>> y;
cout<<endl;

int temp1 = x;
int temp2 = y;
int NOD = 0;
uint64_t NOK = 0;

while (temp1 != temp2)
{
    if (temp1 > temp2)
    {
        temp1 = temp1 - temp2;
    }
    else temp2 = temp2 - temp1;

NOD = temp1;    
}
NOK = x*y/NOD;

int* arr = prime_arr (x ,y);

do
{

int i =0;
	for (; i < arr[i] -1 ; i++)
	{
		int tmp = arr[i];
		if (x % tmp == 0)
		{
			cout<<x<<'|'<<tmp<<endl;
			x = x/tmp;
		}
		
	}
	
}
while (x >1);
cout<<x<<'|'<<endl;
cout<<"_______"<<endl;

do
{
int i = 0;
	for (; i < arr[i] -1 ; i++)
	{
		int tmp = arr[i];
		if (y % tmp == 0)
		{
			cout<<y<<'|'<<tmp<<endl;
			y = y/tmp;
		}
		
	}
	
}while (y>1);

cout<<y<<'|'<<endl;

if (arr != nullptr)
{
    delete[] arr;
}



cout<<"NOD is:" <<NOD<<endl;
cout<<"NOK is:" <<NOK<<endl;

system ("pause");

	return 0;
}