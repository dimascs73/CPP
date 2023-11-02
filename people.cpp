#include <iostream>
#include <string>
#include <vector>
#include <ostream>

using namespace std;

struct People
{
    string name;
    int age;
    bool index_age = true;
    
    
};

ostream& operator <<(ostream &prt, People &person)
{

    prt << person.name<<' '<<person.age<<endl;
    return prt;
}


int main()
{
int SIZE;
cout<<"Enter number of people:";
cin>>SIZE;
vector<People> all_people(SIZE);
int max_count = -1;
bool index_counts = false;
int count = 0;
People person;
// ввод данных

for (int i = 0; i < SIZE; i++)
{
    
    cout<<"Enter person and age:";
    
    cin>>person.name>>person.age;
    all_people [i] = person;
}

int k = 0;
while (k < SIZE)
{
        int i = 0;    
        if (person.age == i && i <200)
        {
            count++;
            person.index_age = false;
        }
       
        if (count > max_count)
        {
        max_count = count;
        }
        i++;
}
            
 k++;   

cout<< max_count;

for (int i = 0; i < SIZE; i++)
{
    if (person.index_age)
    {
        cout<<all_people[i].name<<' '<<all_people[i].age<<endl;
    }

}


    return 0;
}
