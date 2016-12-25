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
    // to save maiden name in case of a divorce
    string maidenName;
    
    int age;
    char gender;
    
public:
    
    Person();
    
    void inputPerson();
    
    
    void setFirstName();
    
    void setLastName();
    
    void setAge();
    
    void setGender();
    
    
    void setWifeLastNameToHusbands(const Person &husband);
    
    
    void printPerson();
    
    void printFirstName();
    
    void printLastName();
    
    void printAge();
    
    void printGender();
    
    
    int getAge();
    
    int getGender();
};

#endif /* Person_hpp */
