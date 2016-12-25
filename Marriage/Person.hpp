#ifndef Person_hpp
#define Person_hpp

#include <string>
#include <vector>

using namespace std;

class Person
{
private:
    
    string firstName;
    string lastName;
    
    // only relevant for females / wives
    string maidenName;
    
    int age;
    char gender;
    
public:
    
    Person();
    
    void inputPerson();
    
    void setFirstName();
    
    void setLastName();
    
    void setWifeLastNameToHusbands(const Person &husband);
    
    void printFirstName();
    
    void printLastName();
    
    void setAge();
    
    int getAge();
    
    void printAge();
    
    void setGender();
    
    int getGender();
    
    void printGender();
};

#endif /* Person_hpp */
