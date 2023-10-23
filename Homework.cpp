#include <iostream>
#include <string>

using namespace std;

 void FillArray(int* const arr, const int size)
{
     for (int i = 0; i < size; i++)
     {
         arr[i] = rand() % 15;
     }
    
}

 void ShowArray(int* const arr, const int size)
 {
     for (int i = 0; i < size; i++)
     {
        cout << arr[i] << '\t';
     }
     
 }

void push_front(int* &arr, int &size, const int &value)
 {
    
    size++;

    int* Tmp_arr = new int[size];
   
    Tmp_arr[0] = value;

     for (int i = 0; i < size; i++)
     {
         Tmp_arr[i+1] = arr[i];
     }
 
     delete[] arr;

     arr = Tmp_arr;
 }

 void pop_front(int* &arr, int &size)
 {
     size--;

     int* Tmp_arr = new int[size];
          
     for (int i = 0; i < size; i++)
     {
         Tmp_arr[i] = arr[i+1];
     }

     delete[] arr;

     arr = Tmp_arr;
     
 }

 void pop_any(int*& arr, int& size, const int index)
 {
     int* Tmp_arr = new int[size-1];

     for (int i = 0; i < size-index-1; i++)
     {
         Tmp_arr[i] = arr[i];
     }

     for (int i = size - index; i < size; i++)
     {
         Tmp_arr[i-1] = arr[i];
     }

     size--;
     delete[] arr;

     arr = Tmp_arr;

 }

 void push_any(int*& arr, int& size, const int index, const int &value)
 {
     int* Tmp_arr = new int[size + 1];

     for (int i = 0; i < size - index - 1; i++)
     {
         Tmp_arr[i] = arr[i];
     }
     Tmp_arr[index] = value;

     for (int i = size - index -1; i < size; i++)
     {
         Tmp_arr[i+1] = arr[i];
     }

     size++;

     delete[] arr;

     arr = Tmp_arr;

 }
int main()
{
    setlocale(LC_ALL, "Russian");

    int size = 7;
    int *arr = new int[size];

    int value = 195;

    FillArray(arr, size);
    cout << "\tЗаполняем массив\n";
    ShowArray(arr, size);
    cout << "\n----------------------------------------------------\n";
    cout << '\n'<< "\tВставляем значение в первый элемент массива\n";


    push_front(arr, size, value);
    ShowArray(arr, size);

    cout << "\n----------------------------------------------------\n";
    cout << '\n'<< "\tУбираем значение из первого элемент массива\n";

    pop_front(arr, size);
    ShowArray(arr, size);
    
    cout << "\n----------------------------------------------------\n";
    cout << '\n' << "\tВставляем значение любой (тут четверный) элемент массива\n";
    push_any(arr, size, 3, value);
    ShowArray(arr, size);
   
    cout << "\n----------------------------------------------------\n";
    cout << '\n' << "Убираем значение из любого (тут четвертого) элемента массива\n";
    pop_any(arr, size, 4);
    ShowArray(arr, size);

    cout << '\n';
    


    delete[] arr;

    arr = nullptr;

    system ("pause");  

    return 0;
}