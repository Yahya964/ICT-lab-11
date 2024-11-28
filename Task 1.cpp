#include <iostream>
#include <string>
using namespace std;

class Person 
{
private:
    string name;
    int age;

public:
    Person(const string& name = "", int age = 0) : name(name), age(age) {}

    void setName(const string& name) 
    {
        this->name = name;
    }
    string getName() const
    {
        return name;
    }

    void setAge(int age) 
    {
        this->age = age;
    }
    int getAge() const {
        return age;
    }

    
    virtual void displayInfo() const 
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }


    virtual ~Person() {}
};


class Employee : public Person 
{
private:
    int employeeID;

public:
    
    Employee(const string& name = "", int age = 0, int employeeID = 0)
        : Person(name, age), employeeID(employeeID) {}

    
    void setEmployeeID(int id) 
    {
        employeeID = id;
    }
    int getEmployeeID() const 
    {
        return employeeID;
    }

   
    void displayInfo() const override 
    {
        Person::displayInfo();
        cout << "Employee ID: " << employeeID << endl;
    }
};


class Student : public Person {
private:
    int studentID;

public:
    
    Student(const string& name = "", int age = 0, int studentID = 0)
        : Person(name, age), studentID(studentID) {}

    
    void setStudentID(int id) 
    {
        studentID = id;
    }
    int getStudentID() const 
    {
        return studentID;
    }

    
    void displayInfo() const override 
    {
        Person::displayInfo();
        cout << "Student ID: " << studentID << endl;
    }
};


int main() 
{
  
    Person person("Yahya", 20);
    cout << "Person Information:" << endl;
    person.displayInfo();
    cout << endl;

   
    Employee employee("Safi", 10, 28371);
    cout << "Employee Information:" << endl;
    employee.displayInfo();
    cout << endl;

   
    Student student("Asad", 32, 98312);
    cout << "Student Information:" << endl;
    student.displayInfo();
    cout << endl;

    return 0;
}
