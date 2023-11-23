#include <iostream>
#include <string>
#include <vector>
#include <ostream>
#include <algorithm>

using namespace std;

struct People
{
    string name;
    int age;
    bool index_age = false;
    bool index_max_count_age = false;
    
    
};

ostream& operator <<(ostream &prt, People &person)
{

    prt << person.name<<' '<<person.age<<endl;
    return prt;
}


int main()
{
int SIZE = 8;
//cout<<"Enter number of people:";
//cin>>SIZE;
vector<People> all_people (SIZE);
vector<int> p_count(SIZE);
vector<int> ag_count(SIZE);
int max_count = -1;
int index = 0;
int age_count = 0;
bool index_counts = false;
int count = 0;

p_count.clear();
ag_count.clear();

// ввод данных


/* for (int i = 0; i < SIZE; i++)
{
    
    cout<<"Enter person and age:";
    
    cin>>person.name>>person.age;
    all_people [i] = person;
} */

all_people[0] = {"Olga" , 15};
all_people[1] = {"Anna" , 15};
all_people[2] = {"Ivan" , 14};
all_people[3] = {"Varvara" , 12};
all_people[4] = {"Dima" , 11};
all_people[5] = {"Oleg" , 12};
all_people[6] = {"Ira" , 11};
all_people[7] = {"Nika" , 81};

//сортировка по возрасту (опционально)

sort (all_people.begin(), all_people.end(), [](People a, People b){return a.age < b.age;});

// выделение сколько максимально подсчитано

int k = 0;
while (k < SIZE)
{
    if (!all_people[k].index_age){
    for (int i = 0; i < SIZE; i++)
    {
        if (all_people[i].age == all_people[k].age)
        {
            count++;
            all_people[i].index_age = true;
        }
       
        } 
   
    if (count >= max_count)  // если два  и более одинаковых возраста
    {
        max_count = count;
        p_count[index] = max_count;         
        ag_count[index] = all_people[k].age;
        index++;
        count = 0;
    }
    
    else count = 0;

    } 
 k++;      
}

// убираем ранее введенные возраста если они стали меньше максимально отмеченных

for (int i = 0; i < SIZE; i++)
{
    if  (p_count[i] != max_count){

        ag_count[i] = 0;
    }
    
}


// если возраст соответствует максимально подсчитаному то индекс
// максимального возраста истина

for (int m = 0; m < SIZE; m++)
{
    for (int i = 0; i < SIZE; i++)
    {
    if (all_people[i].age == ag_count[m] && ag_count[m] !=0)
    {
        all_people[i].index_max_count_age = true;
    }
    }
      
}


for (int x=0; x < SIZE; x++) 
{
    if (ag_count[x] != 0)
    {
        cout<< p_count[x]<<" people have "<<ag_count[x]<<" years"<<endl;
    }

}
cout<<"__________"<<endl;



// выводим людей с максимальным введенным возрастом

for (int i = 0; i < SIZE; i++)
{
    if (all_people[i].index_max_count_age)
    {
        cout<<all_people[i].name<<' '<<all_people[i].age<<" years"<<endl;
    }
 
}

    return 0;
}
