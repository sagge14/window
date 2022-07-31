//
// Created by Sg on 29.07.2022.
//

#include "window.h"
#include <limits>
using namespace std;

std::string Window::isWindow(int x, int y) const {
    if(x >= xX && x < xX + xL)
        if(y >= yY && y < yY + yH)
            return "1";
    return "0";
}

void Window::setX(int L) {
    int x = 0;
    cout << "Enter X coordinate:";
    do
    {
        if(!cin || (xX + x > L - xL || xX + x < 0))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout<<"-----------------------------------------\n";
            cout<<"Wrong x!";
            cout<<"\n-----------------------------------------\n";
            cout<<"Repeat enter X coordinate:";
        }
        cin>>x;
    }
    while(!cin  || (xX + x > L - xL || xX + x < 0));
    xX += x;
    cout << "-ok" << endl;

}

void Window::setY(int H) {
    int y = 0;
    cout << "Enter Y coordinate:";
    do
    {
        if(!cin || (yY + y > H - yH || yY + y < 0))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout<<"-----------------------------------------\n";
            cout<<"Wrong Y!";
            cout<<"\n-----------------------------------------\n";
            cout<<"Repeat enter Y coordinate:";
        }
        cin>>y;
    }
    while(!cin  || (yY + y > H - yH || yY + y < 0));
    yY += y;
    cout << "-ok" << endl;

}

void Window::setXL(int L) {
    int XL = 0;
    cout << "Enter XL:";
    do
    {
        if(!cin || (XL + xX > L || XL < 0))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout<<"-----------------------------------------\n";
            cout<<"Wrong XL!";
            cout<<"\n-----------------------------------------\n";
            cout<<"Repeat enter XL:";
        }
        cin>>XL;
    }
    while(!cin  || (XL + xX > L || XL < 0));
    xL = XL;
    cout << "-ok" << endl;
}

void Window::setYH(int H) {
    int YH = 0;
    cout << "Enter YH:";
    do
    {
        if(!cin || (YH + yY > H || YH < 0))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout<<"-----------------------------------------\n";
            cout<<"Wrong YH!";
            cout<<"\n-----------------------------------------\n";
            cout<<"Repeat enter YH:";
        }
        cin>>YH;
    }
    while(!cin  || (YH + yY > H || YH < 0));
    yH = YH;
    cout << "-ok" << endl;
}

void Window::move(const Monitor& M) {
    cout << "---Enter vector coordinates---" << endl;
    setX(M.getLenght());
    setY(M.getHight());
}

void Window::resize(const Monitor& M) {
    cout << "---Resize window---" << endl;
    setXL(M.getLenght());
    setYH(M.getHight());
}

void Monitor::showWindow(const Window& W) const {
    for (int i = 0; i < H; ++i)
    {
        for (int j = 0; j < L; ++j)
            cout << W.isWindow(j,i);
        cout << endl;
    }
}

int Monitor::getLenght() const {
    return L;
}

int Monitor::getHight() const {
    return H;
}
void showMenu()
{
cout<<"Valid command format: 1 'resize' for resize a window;" << endl;
cout<<"                      2 'display' for display a window in the monitor;" << endl;
cout<<"                      3 'move' for move a window in the monitor;" << endl;
cout<<"                      4 'exit' for exit." << endl;
}
