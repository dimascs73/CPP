#include <iostream>

using namespace std;


int main() {

char action;
int goblin_hp = 15;
int goblin_gold = 0;
int your_gold = 0;
int sword_damage = 5;
int fist_damage = 3;

cout<<"Attack Goblin (F)ist or (S)word:";

action = getchar();

do

{
    if (action == 's' || action == 'S')
    {
        cout<<"You hit Goblin with sword and deal "<< sword_damage<<" HP damage"<<endl;
        goblin_hp = goblin_hp - sword_damage;
        cout<<"Goblin have "<<goblin_hp<<" left\n";

    } 
    else if (action == 'f' || action == 'F')
    {
        goblin_hp = goblin_hp - fist_damage;
        cout<<"You hit Goblin with fist and deal "<< fist_damage<<" HP damage"<<endl;
        cout<<"Goblin have "<<goblin_hp<<" left\n";
        
    }
    else if (goblin_hp <= 0)
    {
        cout<<"Goblin is dead"<<endl;
    }
 } while (goblin_hp >=  0);   
   


    return 0;

}