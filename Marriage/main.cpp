// Driver file to test both classes

#include <iostream>

#include "Marriage.hpp"
#include "Person.hpp"

int main()
{
    Person man, woman;
    Marriage marriage;
    
    cout << "Input man's details.\n";
    cout << "--------------------\n";
    
    man.inputPerson();
    
    cout << "\nInput woman's details.\n";
    cout <<   "----------------------\n";
    
    woman.inputPerson();
    
    marriage.marryCouple(man, woman);
    
    marriage.printMarriedCouple();
}
