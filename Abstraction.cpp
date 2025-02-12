#include <iostream>
#include <stdio.h>
using std ::string;
class AbstractEmployee
{ // abstract lass

    virtual void promotion() = 0; // pure virutal function
};

class employee : AbstractEmployee
{
private:
    string Name;
    string company;
    int age;

public:
void Porichiti()
    {
        std::cout << "Name - " << Name << std::endl;
        std::cout << "Age - " << age << std::endl;
        std::cout << "Company - " << company << std::endl;
    }
    employee(string Name_, string company_, int age_)
    {
        Name = Name_;
        company = company_;
        age = age_;
    }
    void setName(string name_)
    {
        Name = name_;
    }
    string getName()
    {
        return Name;
    }
    void setCompany(string company_)
    {
        company = company_;
    }
    string getCompany()
    {
        return company;
    }
    void setAge(int age_)
    {

        age = age_;
    }
    int getAge()
    {
        return age;
    }
    void promotion()
    {
        if (age > 29)
            std::cout << Name << "got promoted" << std::endl;

        else
            std::cout << Name << "is too young" << std::endl;
    }
    
};

int main()
{
    int number;

    employee two = employee("Soikot", "Facebook", 45);
    two.Porichiti();

    employee three = employee("Ahona", "NSU", 56);
    three.Porichiti();
    int ageTwo = two.getAge();
    std ::cout << ageTwo << std::endl;
    two.setAge(15);
    ageTwo = two.getAge();
    std ::cout << ageTwo << std::endl;

    two.promotion();
    three.promotion();
};
/* what did we learn? 
any class that wants to use the abstract classes methods has to have implementation of those methods in their class blocks
== virtual void 

*/