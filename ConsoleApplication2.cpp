#include <iostream>
#include "Planner.h"

int main()
{
    Planner yaroslav;
    yaroslav.addevent(Date()-1,"Park");
    yaroslav.showinfo();
    
    cout << "=======================================" << endl;
    yaroslav.delevent(Date(), "C++");
    yaroslav.delevent(Date(), "C++");
    yaroslav.delevent(Date()+1, "C++");
    yaroslav.delevent(Date(2025,12,31), "New year");
    yaroslav.showinfo();

}
