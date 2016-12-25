#ifndef Marriage_hpp
#define Marriage_hpp

#include <vector>
#include "Person.hpp"


class Marriage
{
private:
    vector< vector<Person> > marriageVector;
    
    int vectorPosition;
    
public:
    
    Marriage();

    void marryCouple(const Person &husband, Person &wife);
    
    void addHusband(const Person &husband);
    
    void addWife(const Person &wife);
    
    void printMarriedCouple();
    
    void divorce();
    
};

#endif /* Marriage_hpp */
