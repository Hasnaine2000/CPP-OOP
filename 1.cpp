#include <iostream>
#include <stdio.h>
using std ::string;

class employee
{ // user defined datatype - private by default
public:
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
        std::cout << "Name - " << Name << std::endl; // #shift+alt+down arrow to copy same line
        std::cout << "Age - " << age << std::endl;
        std::cout << "Company - " << company << std::endl;
    }
};

int main()
{

    int number; // predefined data types object

    /* employee one; // our object
    one.Name = "Asad";
    one.age = 15;
    one.company = "youtbe";
    one.Porichiti(); */ // benefits? if we would written this function outside of the class we would need to pass parameters to it
    employee two = employee("Soikot", "Facebook", 45);    // but what about if we use 100 more users ??  // default constructor is already enabled maybe with garbage value
    /* two.Name = "Soikot";   // if we write our contructor than we can not pass values to individual atributes
    two.age = 45;
    two.company = "facebook"; */
    two.Porichiti();

    employee three = employee("Ahona","NSU", 56); // here instead of writing 5-6 lines we are writing 2 lines wiht the help of constructor method
    three.Porichiti();

    printf("Is our compiler working?");
};