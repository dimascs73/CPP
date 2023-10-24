#include <iostream>
#include <cstdio>

using namespace std;


int main() {

char action;

cout<<"Start (N)ew game\n"
      "(L)oad game\n"
      "(O)ptions\n"
      "E(x)it\n";


action = getchar();

    switch (action)
    {
    case 'n':
        cout<<"You start new game"<<endl;
        break;

        case 'N':
        cout<<"You start new game"<<endl;
        break;

    case 'l':
        cout<<"You load exicting game"<<endl;
        break;

        case 'L':
        cout<<"You load exicting game"<<endl;
        break;

    case 'o':
        cout<<"Choose game options"<<endl;
        break;

        case 'O':
        cout<<"Choose game options"<<endl;
        break;

    case 'x':
        cout<<"You quit game"<<endl;
        break;
            
    case 'X':
        cout<<"You quit game"<<endl;
        break;


    default:
        break;
    }
    system("pause");

     return 0;

}