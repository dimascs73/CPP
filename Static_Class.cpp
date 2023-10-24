#include <iostream>
#include <string>

using namespace std;


class MyClass
{
private:
    
    string LastName;
    string FirstName;
    string MiddleName;
    int ID;
    

public:

    static int Count;

    MyClass(string LastName, string FirstName, string MiddleName){
        
        this -> LastName = LastName;
        this ->FirstName = FirstName;
        this ->MiddleName = MiddleName;
        Count++;
        ID = Count+2;
    }

    int getID(){
        return ID;     
    }

    void Person(){
        
        cout<<"ID:0000"<<ID<<"  "<<LastName<<' '<<FirstName<<' '<<MiddleName<<' '<<endl;
    }

};

int MyClass::Count = 0;

int main() {
setlocale (LC_ALL, "ru");

MyClass Ivanov ("Иванов", "Иван", "Иванович");
MyClass Petrov ("Петров", "Петр", "Петрович");

//MyClass::Count;

Ivanov.Person();
Petrov.Person();

cout<<MyClass::Count<<endl;

system ("pause"); 
    return 0;

}