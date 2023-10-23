#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int time_h1, time_min1, c_minutes, lessons;
    
    cout << "Начало уроков час:";
    cin >> time_h1;
    cout << "Начало уроков мин:";
    cin >> time_min1;
    cout << "Количество уроков:";
    cin >> lessons;
    cout << "Время урока:";
    cin >> c_minutes;
    
    int sum = 0;

    if (time_h1 >= 8 and time_h1 < 13) {
        int breaks[] = { 15, 20, 15, 20, 20, 15, 10 };
        for (int i = 0; i < lessons - 1; i++) {
            sum = breaks[i] + sum;
        }
    }
    //if (time_h1 >= 9 and time_h1 < 13) {
    //    int breaks[] = { 15, 20, 15, 20, 20, 15, 10 };
    //    for (int i = 0; i < lessons-1; i++) {
    //        sum = breaks[i] + sum;
    //    }
    //    sum = sum - breaks[0];
    //}
    else if (time_h1 >= 13) {
        int breaks[] = { 10, 10, 15, 10, 10 };
        for (int i = 0; i < lessons - 1; i++) {
            sum = breaks[i] + sum;
        }
    }
     
    int time_min2 = time_min1 + (lessons * c_minutes + sum)%60;
    int time_h2 = time_h1 + ((time_min1 + lessons * c_minutes + sum) / 60);
    if (time_min2 >= 60) {
        time_min2 = time_min2 - 60;
    }
    if (time_h2 > 23) {
        time_h2 = time_h2 - 24;
    }
   if (time_min2 < 10) {
   cout << "Уроки закончатся в: " << time_h2 << ":" << "0" <<time_min2 << "\n" << sum;
    }
   else
    {
    
       cout << "Уроки закончатся в: " << time_h2 << ":" << time_min2 << "\n" << sum;
   }
 
   return 0;

}