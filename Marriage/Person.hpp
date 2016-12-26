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
    
    // integer used to find the contact in the vector
    unsigned long int vectorAccessor;
    
public:
    
    Person();
    
    void inputPerson();
    
    
    void setFirstName();
    
    void setLastName();
    
    void setAge();
    
    void setGender();
    
    void setVectorAccessor(unsigned long int &number);
    
    
    void setWifeLastNameToHusbands(const Person &husband);
    
    void setWifeLastNameBackToMaiden();
    
    
    void printPerson();
    
    void printFirstName();
    
    void printLastName();
    
    void printAge();
    
    void printGender();
    
    
    int getAge();
    
    int getGender();
    
    unsigned long int getVectorAccessor();
};

#endif /* Person_hpp */
