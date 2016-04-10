#include "Students.h"

int main()
{
    //главная функция
    cout << "Hello" << endl;
    Students::get_sum();
    Students *s1 = new Students, *s2 = new Students;
    Students::get_sum();
    delete s2;
    Students s3, s4, s5, s6, s7;
    Students::get_sum();

    return 0;
}


