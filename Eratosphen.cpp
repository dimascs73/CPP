#include <iostream>

using namespace std;

int main() {
    int n;
    cout<<"Ввести число:";
    cin>> n;
    bool* resheto = new bool[n+1];
    //bool resheto [n+1];

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
        if (resheto[i] == true)
        {
            sum ++; //вычисляем размер массива простых чисел
            cout<<i<<'\t';
         }  
    }
    cout<<endl;
    
    int* arr = new int[sum];
    
    int i = 2;
    int j = 0;
    while (i<=n)
        {
            if (resheto[i] == true)
            {
            arr[j] = i;    // заполняем массив простыми числами
            cout<<arr[j]<<'\t';
            j++;
            }
        i++;
        }
    
     
    cout<<endl<<sum; 
    cout<<endl;

delete[] resheto;
delete[] arr;

 return 0;   
}