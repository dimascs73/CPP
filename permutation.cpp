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
    const int size = 4;
    int arg[size];

   mass_input(size, arg); //вводим массив
      
      // делаем перестановки

  
    for (int k = size - 1; k > 0; k--)
    {
    
    int tmp = 0;
    for (int j = size; j > 0; j--)
    {
      
      for (int i = 0 ; i < size -1 ; i++)
      {
        cout<<arg[i]<<'\t';
      }
      cout<< endl;
      tmp = arg[j];
      arg[j] = arg[j+1];
      arg[j+1] = tmp;
      
    }
    cout<<"___________"<<endl;
    }
         
     system ("pause");
  
   return 0;
}