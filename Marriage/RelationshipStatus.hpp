#ifndef Marriage_hpp
#define Marriage_hpp

#include <vector>
#include "Person.hpp"


class RelationshipStatus
{
private:
    vector< vector<Person> > marriageVector;
    vector<Person> singleVector;
    
    int vectorPosition;
    
    void addHusband(const Person &husband);
    
    void addWife(const Person &wife);
    
public:
    
    RelationshipStatus();

    void marryCouple(Person &husband, Person &wife);
    
    void printMarriedCouple();
    
    void divorce();
};

#endif /* Marriage_hpp */
