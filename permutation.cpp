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

   mass_input(size, arg); //вводим массив
      
      // делаем перестановки
    int tmp = 0;
    for (int j = 0; j < size -1 ; j++)
    {
      tmp = arg[j];
      arg[j] = arg[j+1];
      cout<<*arg<<endl;
    }
    
    
           
        
    system ("pause");
  
   return 0;
}