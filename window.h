//
// Created by Sg on 29.07.2022.
//
#include <string>
#include <iostream>
#pragma once
class Monitor;
class Window{
    int xX = 0;
    int yY = 0;
    int xL = 1;
    int yH = 1;
    void setX(int L);
    void setY(int H);
    void setXL(int L);
    void setYH(int H);
public:
    void move(const Monitor& M);
    void resize(const Monitor& M);

    std::string isWindow(int x, int y) const;

};
class Monitor{
    int L = 80;//80 and 50 too much
    int H = 50;//80 and 50 too much
public:
    void showWindow(const Window& W) const;
    int getLenght() const;
    int getHight() const;
};
void showMenu();

