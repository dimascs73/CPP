#include <iostream>
#include <string>

using namespace std;

void mass_input(const int size, int* arg){
      for (int i = 0; i < size; i++) // Заполняем массив
        {
            arg[i] = i+1;
            cout<<arg[i]<<'\t';
       }
        cout<<endl;
        cout<<endl;
        cout<<"_________________________________________________\n";

}

int main()
{
    setlocale(LC_ALL, "Russian");
    const int size = 3;
    int arg[size];

   mass_input(size, arg);
      
      // делаем перестановки

    for (int k = size -1; k > 0 ; k--)
    {
      for (int i = size -1 ; i > 0; i--){ 
        int tmp = 0;
        int j = 0;
        for (; j < size - 1; j++){             
            tmp = arg[j];
            arg[j] = arg[j+1];
            arg[j+1] = tmp;
            cout<<arg[j]<<'\t';
           }
            arg[i] = tmp;
            cout<<arg[j]<<'\t'<<endl;
            }
                       
            cout<<endl;
           
     } 
           
        
    system ("pause");
  
   return 0;
}