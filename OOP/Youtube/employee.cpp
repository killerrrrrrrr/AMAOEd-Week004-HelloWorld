#include <iostream>
#include <cstring>

using namespace std;

// Abstraction ex.
class AbstractEmployee {
   virtual void AskForPromotion() = 0; //Abstract class should have atleast 1 pure virtual function
};

class Employee:AbstractEmployee {
// Encapsulated ex.
private: 
    string Company;
    int Age;

protected:
    string Name;

public:
    // Setter ex.
    void setName(string name){
        Name = name;
    }
    // Getter ex.
    string getName() {
        return Name;
    }
    void setCompany(string company) {
        Company = company;
    }
    string getCompany() {
        return Company;
    }
    void setAge(int age) {
        if (age >= 18)
        Age = age;
    }
    int getAge() {
        return Age;
    }

    void IntroduceYourself() {
        cout << "Name - " << Name << endl;
        cout << "Company - " << Company << endl;
        cout << "Age - " << Age << endl;
    }
    
    // Constructor ex.
    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }
    
    // Implementation of Abstraction Ex.
    void AskForPromotion() {
        if (Age > 30)
            cout << Name << " got promoted!" << endl;
        else
            cout << Name << " sorry NO promotion for you!" << endl;
    }

    virtual void Work(){
        cout << Name << " is checking email, task backlog, performing tasks..." << endl;
    }
};
   
 // Inheritance ex.
class Developer:public Employee {
    public:
        string FavProgrammingLanguage;

        // Inheritance constructor ex.
        Developer(string name, string company, int age, string favProgrammingLanguage)
        :Employee(name, company, age)
        {
        FavProgrammingLanguage = favProgrammingLanguage;
        }

        // Inheritance implementation ex.
        void FixBug(){
            cout << Name <<" fixed bug using " << FavProgrammingLanguage << endl;
        }

        void Work(){
        cout << Name << " is writing " << FavProgrammingLanguage << " code." << endl;
    }
};

class Teacher:public Employee {
public:
    string Subject;
    Teacher(string name, string company, int age, string subject) 
    :Employee(name, company, age)
    {
        Subject = subject;
    }

    void PrepareLesson() {
        cout << Name << " is preparing " << Subject <<" lesson." << endl;
    }

    void Work(){
        cout << Name << " is teaching " << Subject << endl;
}
};

int main () 
{
    // Employee employee1 = Employee("Sheena", "Google", 29); 
    // Employee employee2 = Employee("John", "Amzon", 35);

    Developer d = Developer("Sheena", "Google,", 29, "C++");
    Teacher t = Teacher("Pedring", "AMA", 35, "Math");

    // Pointer and Reference
    Employee* e1 = &d;
    Employee* e2 = &t;

    // -> was used to access numbers using a pointers
    e1->Work();
    e2->Work();


    
    // employee1.setAge(15);
    // cout << employee1.getName() << " is " << employee1.getAge() << " years old" << endl;
};


// NOTES:

// --------------------------------------------------------

//Access Modifiers: private(default),public,protected(priv excpt: inherited classes)

// --------------------------------------------------------

// 4 Pillars of OOP

    // Encapsulation - bundeling, to prevent outside of the class to access or modify our data inside our class. (Get and Set Method)

    // Abstraction - hiding complex things behind a procedure that makes those things look simple. 
    
        // Ex. Smartphone - taking photos using button, the complexity behind tapping the button were hidden by the smartphone company

    // Inheritance - inherit attributes and methods from one class to another. Note that constructor cannot be inherited
        // derived class (child) - the class that inherits from another class
        // base class (parent) - the class being inherited from

    // Polymorphism - describes the ability of an object or a method to have many forms. The most common use is when a parent class reference is used to refer to an object of a child class object. 

// --------------------------------------------------------

// Constructor is a method: 

    //doesn't have a return type like void etc.
    //same name as the class 
    //the constructor must be under the Public class modifier

// --------------------------------------------------------
// Virtual Function -  means "hey can you please check if there is implementation of this function in my derived (child) classes and if yes, please execute that instead "