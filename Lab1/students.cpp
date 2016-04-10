#include "Students.h"
//функция
int Students::sum=0;
void Students::get_sum()
{
    cout << sum << " " << sum*sizeof(Students) << endl;
}

