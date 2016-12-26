// Driver file to test both classes

#include <iostream>

#include "RelationshipStatus.hpp"
#include "Person.hpp"

int main()
{
    Person man, woman, man2, woman2;
    RelationshipStatus relationshipStatus;
    
    cout << "Input man's details.\n";
    cout << "--------------------\n";
    
    man.inputPerson();
    
    cout << "\nInput woman's details.\n";
    cout <<   "----------------------\n";
    
    woman.inputPerson();
    
    relationshipStatus.marryCouple(man, woman);
    
    
    
    
    
    cout << "Input man's details.\n";
    cout << "--------------------\n";
    
    man2.inputPerson();
    
    cout << "\nInput woman's details.\n";
    cout <<   "----------------------\n";
    
    woman2.inputPerson();
    
    relationshipStatus.marryCouple(man2, woman2);
    
    relationshipStatus.divorce();
}
