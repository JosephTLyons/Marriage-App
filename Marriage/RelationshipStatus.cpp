//
//  RelationshipStatus.cpp
//  RelationshipStatus
//
//  Created by Joseph Lyons on 12/24/16.
//  Copyright © 2016 Joseph Lyons. All rights reserved.
//

#include <iostream>
#include "RelationshipStatus.hpp"

using namespace std;

// constructor
RelationshipStatus::RelationshipStatus()
{
    vectorPosition = 0;
}

void RelationshipStatus::marryCouple(Person &husband, Person &wife)
{
    vector<Person> temporary;
    unsigned long int tempVectorAccessorHolder = 0;
    
    // change wife's last name
    wife.setWifeLastNameToHusbands(husband);
    
    temporary.push_back(husband);
    temporary.push_back(wife);
    
    marriageVector.push_back(temporary);
    
    
    tempVectorAccessorHolder = marriageVector.size() - 1;
    
    husband.setVectorAccessor(tempVectorAccessorHolder);
}

void RelationshipStatus::addHusband(const Person &husband)
{
    // Add husband to subvector of vector position
    marriageVector[vectorPosition].push_back(husband);
}

void RelationshipStatus::addWife(const Person &wife)
{
    // Add husband to subvector of vector position and increment
    // Position to next spot
    marriageVector[vectorPosition++].push_back(wife);
}

void RelationshipStatus::printMarriedCouple()
{
    marriageVector[0][0].printPerson();
    marriageVector[0][1].printPerson();
}

void RelationshipStatus::divorce()
{
    marriageVector[0][1].setWifeLastNameBackToMaiden();
}



// Print "Mr. and Mrs. Joseph Lyons function
