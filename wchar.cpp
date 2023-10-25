#include <iostream>
#include <string>

using namespace std;

int main(){
    setlocale(LC_ALL,"RUS");
    

    wchar_t rus[] =L'П';
    

    wcout<<(int)rus<<endl;

    cout<<sizeof(wchar_t)<<endl;

system ("pause");

 return 0;
}