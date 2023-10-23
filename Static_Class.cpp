#include <iostream>

using namespace std;

class MyClass
{
private:
    int ID;
    string LastName;
    char FirstName;
    char MiddleName;
    

public:
    
    static int Count;

    MyClass(int ID, string LastName, char FirstName, char MiddleName){
        this ->ID = ID;
        this -> LastName = LastName;
        this ->FirstName = FirstName;
        this ->MiddleName = MiddleName;
        Count++;

    }

    void Person(){
        ID = ID + Count;
        cout<<"ID:0000"<<ID<<'\t'<<LastName<<' '<<FirstName<<'.'<<MiddleName<<'.'<<endl;
    }

//    ~MyClass();
};

int MyClass::Count = 0;

/*MyClass::MyClass(int ID, string LastName, char FirstName, char MiddleName)
{
    ID = ID+Count;
    
    cout<<ID<<'\t'<<LastName<<' '<<FirstName<<'.'<<MiddleName<<'.'<<endl;

}*/
/*
MyClass::~MyClass()
{
}
*/



int main() {
setlocale(LC_ALL, "ru");

MyClass Ivanov (1, "Ivanov",'I','I');
MyClass Petrov (2, "Petrov", 'R', 'P');

//MyClass::Count;

Ivanov.Person();
Petrov.Person();

cout<<MyClass::Count<<endl;


    return 0;

}