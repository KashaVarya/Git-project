#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <iostream>
using namespace std;

class Students
{
    private:
        static int sum;
        int age;
        float sr_ball;
        int a, b, add;
    public:
        Students() { sum++; }
        ~Students() { sum--; }
        static void get_sum();
};

#endif // MAINWINDOW_H
