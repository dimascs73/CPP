#include <iostream>

using namespace std;


int main() {

char action;
int goblin_hp = 15;
int goblin_gold = 5;
int your_gold = 0;
int sword_damage = 5;
int fist_damage = 3;

do

{
    cout<<"Attack Goblin (F)ist or (S)word or run away(Q):"; 
    action = getchar();
    if (action == 's' || action == 'S')
    {
        cout<<"You hit Goblin with sword and deal "<< sword_damage<<" HP damage"<<endl;
        goblin_hp = goblin_hp - sword_damage;
        cout<<"Goblin have "<<goblin_hp<<" HP left\n";
    }
    
    if (action == 'f' || action == 'F')
    {
        goblin_hp = goblin_hp - fist_damage;
        cout<<"You hit Goblin with fist and deal "<< fist_damage<<" HP damage"<<endl;
        cout<<"Goblin have "<<goblin_hp<<" HP left\n";    
    }
    if (goblin_hp <=  0) {
    your_gold = your_gold + goblin_gold;
    cout<<"Golin is dead. You get "<<goblin_gold<<" gold."<<endl;
    cout<<"You have "<<your_gold<<" gold."<<endl; 
    break;
    }
    else if (action == 'q' || action == 'Q')
    {
        cout<<"You run away."<<endl;
        break;
    }
    
} while (action != 'q' && goblin_hp > 0|| action != 'Q' && goblin_hp > 0);
 

    return 0;

}