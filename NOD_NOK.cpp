#include <iostream>

using namespace std;

int* prime_arr (int &a, int &b){
int n;

if (a > b)
{
	 n = a;
}
else n = b;
bool* resheto = new bool[n+1];

    for (int i = 2; i < n+1; i++)
    {
         resheto[i] = true;
    }
    int x = 2;
    while (x*x <= n)
    {
        if (resheto[x] == true)
        {
          for (int y = x*x; y <=n; y+=x)
          {
            resheto[y] = false;
          }
            
     }
     x+=1;   
    }
    int sum = 0;
    for (int i = 2; i < n+1; i++)
    {
        if (resheto[i]== true)
        {
            sum ++; //вычисляем размер массива простых чисел
         }  
    }
    int* arr = new int[sum];
    
    int i = 2;
    int j = 0;
    while (i<=n)
        {
            if (resheto[i])
            {
            arr[j] =i;    // заполняем массив простыми числами
            //cout<<arg[j]<<'\t';
            j++;
            }
        i++;
        }
delete[] resheto;

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
unsigned long long NOK = 0;

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
	
}while (x >1);
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


delete[] arr;

cout<<"NOD is:" <<NOD<<endl;
cout<<"NOK is:" <<NOK<<endl;

system ("pause");

	return 0;
}