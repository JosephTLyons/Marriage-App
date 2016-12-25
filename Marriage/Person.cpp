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
}

void Person::setWifeLastNameToHusbands(const Person &husband)
{
    lastName = husband.lastName;
}

void Person::printFirstName()
{
    cout << firstName;
}

void Person::printLastName()
{
    cout << lastName;
}

void Person::setAge()
{
    cout << "Input age:         ";
    cin >> age;
}

int Person::getAge()
{
    return age;
}

void Person::printAge()
{
    cout << age;
}

void Person::setGender()
{
    cout << "Input gender(M/F): ";
    cin >> gender;
    
    gender = toupper(gender);
    
    // add code to restrict input to M or F
}

int Person::getGender()
{
    return gender;
}

void Person::printGender()
{
    cout << gender;
}
