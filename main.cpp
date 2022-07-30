#include <iostream>
#include "window.h"
using namespace std;
int main() {
    Monitor myM;
    Window myW;
    string command;

    while(true)
    {
        showMenu();
        cout<<"Enter the command:";
        cin>>command;
        if(command == "move")
            myW.move(myM);
        else if (command == "resize")
            myW.resize(myM);
        else if (command == "display")
            myM.showWindow(myW);
        else if (command == "exit")
            break;
        else
            cout << "Error! Unknown command!" << endl;
    }
 cout << "---Bye, bye!---" << endl;
    cout << "---Github is there---" << endl;

    return 0;
}