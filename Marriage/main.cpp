#include <iostream>

#include "Marriage.hpp"
#include "Person.hpp"

int main()
{
    Person husband, wife;
    Marriage marriage;
    
    cout << "Input husband's details.\n";
    cout << "------------------------\n";
    
    husband.inputPerson();
    
    cout << "\nInput wife's details.\n";
    cout <<   "---------------------\n";
    
    wife.inputPerson();
    
    marriage.marryCouple(husband, wife);
    
    cout << "stop";
}
