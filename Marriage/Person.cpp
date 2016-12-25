#include <ctype.h>
#include <iostream>

#include "Person.hpp"

Person::Person()
{
    age    =  0;
    gender = '?';
}

void Person::inputPerson()
{
    setFirstName();
    setLastName();
    setAge();
    setGender();
}

void Person::setFirstName()
{
    cout << "First Name:        ";
    cin >> firstName;
}

void Person::setLastName()
{
    cout << "Last Name:         ";
    cin >> lastName;
    
    // for females and wives
    maidenName = lastName;
}

void Person::setAge()
{
    cout << "Input Age:         ";
    cin >> age;
}

void Person::setGender()
{
    cout << "Input gender(M/F): ";
    cin >> gender;
    
    gender = toupper(gender);
    
    // add code to restrict input to M or F
}

void Person::setWifeLastNameToHusbands(const Person &husband)
{
    lastName = husband.lastName;
}

void Person::printPerson()
{
    printFirstName();
    
    cout << endl;
    
    printLastName();
    
    cout << endl;
    
    printAge();
    
    cout << endl;
    
    printGender();
    
    cout << endl;
}

void Person::printFirstName()
{
    cout << firstName;
}

void Person::printLastName()
{
    cout << lastName;
}

void Person::printAge()
{
    cout << age;
}

void Person::printGender()
{
    cout << gender;
}

int Person::getAge()
{
    return age;
}

int Person::getGender()
{
    return gender;
}
