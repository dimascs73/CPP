#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>

using namespace std;

class Spisok
{
private:
    
    string LastName;
    string FirstName;
    string MiddleName;
    int ID;

friend ostream& operator<<(ostream& os, Spisok& Man);
friend istream& operator>>(istream& is, Spisok& Man);

public:

    static int Count;

    int getID(){
        return ID;     
    }
    string GetName(){
        return LastName;
        return FirstName;
        return MiddleName;
    }
    void SetName(string LastName, string FirstName, string MiddleName){

        this -> LastName = LastName;
        this ->FirstName = FirstName;
        this ->MiddleName = MiddleName;
        Count++;
        ID = Count+2;

    }

};

ostream& operator<<(ostream& os, Spisok& Man)
{
  
  os <<Man.ID<<' '<<Man.LastName<<' '<<Man.FirstName<<' '<<Man.MiddleName<<'\n';
  return os;
}
istream& operator>>(istream& is, Spisok& Man)
{
  
  is >>Man.ID>>Man.LastName>>Man.FirstName>>Man.MiddleName;
  return is;
}
int Spisok::Count = 0;

int main() {
setlocale (LC_ALL, "ru");
char action;

string path = "spisok.txt";

SetConsoleCP(1251);


fstream file;
file.open(path, fstream::in | fstream::out | fstream::app);
if (!file.is_open())
{
    cout<<"������ �������� �����\n";
}
else{
    cout<<"���� ������\n";
    
    cout<<"������� 1 ��� ������ � ����\n"
        <<"������� 2 ��� ������ �� �����"<<endl;
    action = getchar();
    if (action == 49)
    {
        Spisok Man;
        Man.SetName("������", "����", "��������");
        file<<Man;
        Man.SetName("������", "����", "��������");
        file<<Man;
    }
    if (action == 50)
    {
       while (true)
       {
        Spisok Man;
        file>>Man;
        if (file.eof())
        {
            break;
        }
        cout<<Man;
       }    
    }
}
file.close();
SetConsoleCP(866); 
system ("pause"); 
return 0;

}