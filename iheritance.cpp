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
class developer : public employee
{  
    public:        
    string favLanguage;
    string department;

public:
    developer(string Name_, string company_, int age_,string favLanguage_, string department_): employee(Name_,company_,age_)  //####
    {
        favLanguage = favLanguage_;
        department = department_;
    };
    void Porichiti(){
        employee::Porichiti();  // extends porichiti from employee 
        std::cout << "Fav Langauge - " << favLanguage << std::endl;
        std::cout << "Department - " << department << std::endl;
    };

};
int main()
{
    

    developer four = developer("Chudir Bhai","IUB", 65, "python", "Law");
     four.Porichiti();


};
