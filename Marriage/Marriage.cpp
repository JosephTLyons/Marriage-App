//
//  Marriage.cpp
//  Marriage
//
//  Created by Joseph Lyons on 12/24/16.
//  Copyright © 2016 Joseph Lyons. All rights reserved.
//

#include <iostream>
#include "Marriage.hpp"

using namespace std;

// constructor
Marriage::Marriage()
{
    vectorPosition = 0;
}

void Marriage::marryCouple(const Person &husband, Person &wife)
{
    vector<Person> temporary;
    
    // change wife's last name
    wife.setWifeLastNameToHusbands(husband);
    
    temporary.push_back(husband);
    temporary.push_back(wife);
    
    marriageVector.push_back(temporary);
}

void Marriage::addHusband(const Person &husband)
{
    // Add husband to subvector of vector position
    marriageVector[vectorPosition].push_back(husband);
}

void Marriage::addWife(const Person &wife)
{
    // Add husband to subvector of vector position and increment
    // Position to next spot
    marriageVector[vectorPosition++].push_back(wife);
}

void Marriage::printMarriedCouple()
{
    marriageVector[0][0].printPerson();
    marriageVector[0][1].printPerson();
}

void Marriage::divorce()
{
    // set wifes last name back to maiden
    //marriageVector[0][1].set
}



// Print "Mr. and Mrs. Joseph Lyons function
