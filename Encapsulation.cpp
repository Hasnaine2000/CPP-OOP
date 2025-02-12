#include <iostream>
#include <stdio.h>
using std ::string;

class employee
{
private:
    string Name;
    string company;
    int age;

public:
    employee(string Name_, string company_, int age_)
    {
        Name = Name_;
        company = company_;
        age = age_;
    }
    void Porichiti()
    {
        std::cout << "Name - " << Name << std::endl;
        std::cout << "Age - " << age << std::endl;
        std::cout << "Company - " << company << std::endl;
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
        if(age_<18){
            std::cout<<"this person can not be a employee" << std::endl;
        }else
        age = age_;
    }
    int getAge()
    {
        return age;
    }
};

int main()
{
    int number;

    employee two = employee("Soikot", "Facebook", 45);
    two.Porichiti();

    employee three = employee("Ahona", "NSU", 56);
    three.Porichiti();
    int ageTwo = two.getAge(); // cant access the variables now, only the constructor mathod is accessable now - getting the initial age
    std ::cout << ageTwo << std::endl;
    two.setAge(15); // setting age to 30
    ageTwo = two.getAge(); // getting new age
    std ::cout << ageTwo << std::endl;
};